---
layout:     problem
problem:    '04'
authors:    [2013331036]
---

{% for author in page.authors %}
{% capture code %}{% include_relative {{author}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}