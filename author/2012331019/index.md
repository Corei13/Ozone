---
layout:     author
author:     2012331019
problems:   ['04']
---


{% for problem in page.problems %}
{% capture code %}{% include_relative {{problem}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}