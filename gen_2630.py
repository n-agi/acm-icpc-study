import random

ret = []


n = int(raw_input())

for i in xrange(0, n**2):
	ret.append(random.randint(0,1))
for i in xrange(0, n):
	for j in xrange(0, n):
		print ret[i*n + j],
	print
