p=['D','A','B','C','E']
for i in xrange(0,3):
	a,b,c,d=map(int,raw_input().split())
	print p[4-a-b-c-d]
