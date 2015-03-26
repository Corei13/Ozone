---
layout:     problem
problem:    '02'
authors:    [2013331004, 2013331009, 2013331015, 2013331017, 2013331032, 2013331033, 2013331035, 2013331036, 2013331038, 2013331042, 2013331047, 2013331050, 2013331057, 2013331061]
---

{% for author in page.authors %}
{% capture code %}{% include_relative {{author}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}