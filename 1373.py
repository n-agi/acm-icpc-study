i=int(raw_input(),2)
if(i != 0):
	print str(oct(i))[1:].replace('L','')
else:
	print '0'
