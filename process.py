import os, re, sys, json

r = re.compile('w([0-9]+)_([0-9]{10}).([a-z]+)')

def insert_file(path, template, **kwargs):
    f = open(path, 'w')
    f.write(open('_templates/%s.md' % template).read() % kwargs)
    f.close()

def mkdir(*path):
    directory = os.path.join(*path)
    if not os.path.exists(directory):
        os.makedirs(directory)


def insert(src, files):
    problems, authors = {}, {}
    for filename in files:
        m = r.match(filename)
        if m:
            problem, author, lang = m.groups()
            problem, author = "%02d" % int(problem), int(author)
            
            if author not in problems:
                problems[author] = []
            problems[author].append(problem)

            if problem not in authors:
                authors[problem] = []
            authors[problem].append(author)

            mkdir('author', str(author))
            mkdir('problem', problem)

            content = open(os.path.join(src, filename)).read()
            insert_file(path="%s/%s/%s.md" % ('author', author, problem),
                template='code', problem=problem,
                content=content, lang=lang, author=author)
            insert_file(path="%s/%s/%s.md" % ('problem', problem, author),
                template='code', problem=problem,
                content=content, lang=lang, author=author)

    for author, problems in problems.items():
        insert_file(path="%s/%s/index.md" % ('author', author),
            template='author', author=author, problems=problems)

    for problem, authors in authors.items():
        insert_file(path="%s/%s/index.md" % ('problem', problem),
            template='problem', problem=problem, authors=authors)

src = sys.argv[1]

mkdir('author')
mkdir('problem')

insert(src, os.listdir(src))
