val = map(int,raw_input().split(' '))
x=val[0]
y=val[1]
w=val[2]
h=val[3]
vmin = 0
hmin = 0
if((w/2)<x):
	vmin = w-x
else:
	vmin = x
if((h/2)<y):
	hmin = h-y
else:
	hmin = y
print min(vmin,hmin)
