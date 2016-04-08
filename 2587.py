f=[]
a=0
for i in xrange(0,5):
	d = int(raw_input())
	f.append(d)
	a += d
f = sorted(f)
print a/5
print f[2]
