n=int(raw_input())
x=map(int,[x for x in raw_input().split(' ')])
v=int(raw_input())
cnt=0
for i in x:
	if(v==i):
		cnt += 1
print cnt
