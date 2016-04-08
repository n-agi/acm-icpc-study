import math
def nCr(n,r):
	f = math.factorial
	return f(n) / f(r) / f(n-r)
ans = []
N = int(raw_input())
for i in xrange(0,N):
	ii = map(int, raw_input().split(' '))
	ans.append(nCr(ii[1],ii[0]))
ans = [str(x) for x in ans]
print '\n'.join(ans)
