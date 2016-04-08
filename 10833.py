n=int(raw_input())
s=0
for i in xrange(0,n):
	a,b=map(int,raw_input().split())
	s+= (b % a)
print s
