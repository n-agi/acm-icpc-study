def m(a,b,c):
	return a*60*60 + b*60 + c
def n(a):
	b = a / 3600
	c = a % 3600 / 60
	d = a % 3600 % 60
	return "%02d:%02d:%02d" % (b,c,d)
a,b,c=map(int,raw_input().split(':'))
d,e,f=map(int,raw_input().split(':'))
i=m(a,b,c)
j=m(d,e,f)
if(i > j ):
	print n(j+3600*24-i)
else:
	print n(j-i)
