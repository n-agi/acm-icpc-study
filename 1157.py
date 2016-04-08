from collections import Counter
c=Counter()
for a in [x for x in raw_input().strip().lower()]:
	c[a]+=1
l=c.items()
l.sort(key=lambda item: item[1])
if(l[-1][1] == l[-2][1]):
	print '?'
else:
	print l[-1][0].upper()
