---
layout:     problem
problem:    '04'
authors:    [2012331019, 2013331036, 2013331038]
---

{% for author in page.authors %}
{% capture code %}{% include_relative {{author}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}