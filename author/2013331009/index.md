---
layout:     author
author:     2013331009
problems:   ['01', '02', '03']
---


{% for problem in page.problems %}
{% capture code %}{% include_relative {{problem}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}