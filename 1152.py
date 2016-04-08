v=raw_input().replace('\n','').strip()
if(v=='' or v==' '):
	print '0'
else:
	print len(v.split(' '))
