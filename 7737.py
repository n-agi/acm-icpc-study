def oddprod(l, h):
	p=1
	if(l % 2 > 0):
		ml = l
	else:
		ml = l + 1
	if(h % 2 > 0):
		mh = h
	else:
		mh = h -1
	while ml <= mh:
		p *= ml
		ml = ml + 2
	return p
def get(n):
	return fact(2 * n) / fact(n + 1) * fact(n)
def fact(n):
	f = 1
	for i in xrange(1,n-1):
		f = f * oddprod(3,2**(i+1)-1)
	return 2 ** ( 2 ** n - 1) *  f
print fact(3)	
