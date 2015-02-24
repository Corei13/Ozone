---
layout:     author
author:     %(author)s
problems:   %(problems)s
---


{%% for problem in page.problems %%}
{%% capture code %%}{%% include_relative {{problem}}.md %%}{%% endcapture %%}
{{ code | markdownify }}
{%% endfor %%}