<a name="%(author)s.%(problem)s"></a>

{%% if page.author %%}
- **[USACO {{site.data.problems['%(problem)s'].section}} - {{site.data.problems['%(problem)s'].title}}]({{site.baseurl}}/problem/%(problem)s)**
{%% endif %%}
{%% if page.problem %%}
- **[{{site.data.authors[%(author)s]}}]({{site.baseurl}}/author/%(author)s)**
{%% endif %%}
{%% highlight %(lang)s %%}
%(content)s
{%% endhighlight %%}