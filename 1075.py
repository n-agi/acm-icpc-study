N = int(raw_input())
F = int(raw_input())
l = N - (N%100)
for i in xrange(0,100):
	if(l % F == 0):
		print str(l)[-2:]
		break
	else:
		l+=1
