---
layout:     author
author:     2013331035
problems:   ['01', '02']
---


{% for problem in page.problems %}
{% capture code %}{% include_relative {{problem}}.md %}{% endcapture %}
{{ code | markdownify }}
{% endfor %}