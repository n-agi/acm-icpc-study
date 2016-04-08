def cycle(n):
    t=n
    flag=False
    idx=0
    while(flag is False):
        idx += 1
	n = (n%10)*10 + (((n/10) + (n%10))%10)
        if(n == t):
            return idx
def main():
    n = int(raw_input())
    print cycle(n)
main()
