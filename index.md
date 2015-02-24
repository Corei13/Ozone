---
layout:     default
title:      Home
---
{{site.title}}
==============

- **Authors**
{% for author in site.data.authors %}
{% assign skip = true %}
{% for _page in site.pages %}
{% if _page.layout == 'author' and _page.author == author[0] and _page.problems != empty %}
{% assign skip = false %}
{% endif %}
{% endfor %}
{% if skip != true %}
    - [{{author[1]}}]({{site.baseurl}}/author/{{author[0]}})
{% endif %}
{% endfor %}
- **Problems**
{% for problem in site.data.problems %}
{% assign skip = true %}
{% for _page in site.pages %}
{% if _page.layout == 'problem' and _page.problem == problem[0] and _page.authors != empty %}
{% assign skip = false %}
{% endif %}
{% endfor %}
{% if skip != true %}
    - [Week #{{problem[0]}} - {{problem[1].title}} (USACO {{problem[1].section}})]({{site.baseurl}}/problem/{{problem[0]}})
{% endif %}
{% endfor %}
