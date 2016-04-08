n=int(raw_input())
d=[]
idx=0
for i in xrange(0,n):
	a=map(int,raw_input().split())
	a=sorted(a)
	m=a[-1]
	if(m*m - a[0]*a[0] - a[1]*a[1] == 0):
		d.append("yes")
	else:
		d.append("no")
	idx+=1
for i in xrange(0,idx):
	print "Scenario #"+str(i+1)+":\n"+d[i]
	if(i != idx-1):
		print ""
