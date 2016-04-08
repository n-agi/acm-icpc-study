def isPrime(n):
    if n < 2: 
        return False;
    if n % 2 == 0:
         # return False
         return n == 2
    k = 3
    while k*k <= n:
         if n % k == 0:
             return False
         k += 2
    return True
n=int(raw_input())
if(n%2==0):
    print str( n/2).replace('L','')
elif(isPrime(n)):
    print str(n-1).replace('L','')
else:
    print str(n/3*2).replace('L','')

