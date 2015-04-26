a = ['black','brown','red','orange','yellow','green','blue','violet','grey','white']
b = {}
b[0] = raw_input()
b[1] = raw_input()
b[2] = raw_input()

s = int(str(a.index(b[0]))+str(a.index(b[1]))) * int('1'+'0'*a.index(b[2]))
print s
