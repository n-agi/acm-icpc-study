n=int(raw_input())
a = [int(x) for x in raw_input().split()]
a = sorted(a)
m=int(raw_input())
b = [int(x) for x in raw_input().split()]

for i in b:
	low = 0
	high = len(a)-1
	mid = 0
	found = False
	while(low <= high):
		mid = (low + high) / 2
		if(a[mid] > i):
			high = mid - 1
		elif(a[mid] < i):
			low = mid + 1
		elif(a[mid] == i):
			found = True
			break
	if(found is True):
		print 1
	else:
		print 0	
