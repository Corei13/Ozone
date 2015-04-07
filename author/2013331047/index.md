---
layout:     author
author:     2013331047
problems:   ['01', '02', '03', '04']
---


{% for problem in page.problems %}
{% capture code %}{% include_relative {{problem}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}