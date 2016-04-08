#include <stdio.h>
int a[100000], b[100000];
int main(){
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		a[j]=1;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		if(a[b[i]] == 1) puts("1");
		else puts("0");
	}
	return 0;
}
