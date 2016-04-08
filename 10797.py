n=int(raw_input())
d=[int(x) for x in raw_input().split()]
s=0
for i in d:
	if(n == i):
		s+= 1
print s
