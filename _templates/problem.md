---
layout:     problem
problem:    '%(problem)s'
authors:    %(authors)s
---

{%% for author in page.authors %%}
{%% capture code %%}{%% include_relative {{author}}.md %%}{%% endcapture %%}
{{ code | markdownify }}
{%% endfor %%}