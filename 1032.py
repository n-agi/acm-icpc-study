count = int(raw_input())
l = []
for i in xrange(0, count):
    l.append(raw_input())
buf = ''
a = True
if(len(l[0]) == 0):
    exit()
for i in xrange(0, len(l[0])):
    a = True
    for j in xrange(0, len(l)-1):
        if l[j][i] == '?':
            buf += '?'
        elif l[j][i] != l[j+1][i]:
            buf += '?'
            a = False
    if(a == True):
        buf += l[j][i]
print buf
