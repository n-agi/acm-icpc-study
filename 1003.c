#include <stdio.h>
int fib(int n)
{
    int a = 0;
    int b = 1;
    while (n-- > 1) {
        int t = a;
        a = b;
        b += t;
    }
    return b;
}
int main(){
	int input,n,i=0;
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&input);
		fib(input);
		if(input == 0) puts("1 0");
		else if(input == 1) puts("0 1");
		else printf("%d %d\n",fib(input-1),fib(input));
	}
	return 0;
}

