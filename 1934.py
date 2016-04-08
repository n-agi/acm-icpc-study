def lcm(x, y):
    if x > y:
        greater = x
    else:
        greater = y

    while(True):
        if((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1
    return lcm
n=int(raw_input())
for i in xrange(0,n):
    c,d=map(int,raw_input().split())
    print lcm(c,d)
