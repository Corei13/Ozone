---
layout:     problem
problem:    '04'
authors:    [2013331004, 2013331019, 2013331036, 2013331038, 2013331047]
---

{% for author in page.authors %}
{% capture code %}{% include_relative {{author}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}