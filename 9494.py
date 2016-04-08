def main():
	while(True):
		l=int(raw_input())
		if(l==0):
			return
		m=0
		for i in xrange(0,l):
			a=len(raw_input().split(' ')[0])
			if(m<a):
				m=a
		print str(m+1).replace('L','')
main()
