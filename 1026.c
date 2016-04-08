#include <stdio.h>
#include <stdlib.h>
int comp(const void *elem1, const void *elem2){
	int f = *((int *)elem1);
	int s = *((int *)elem2);
	if(f > s) return 1;
	if(f < s) return -1;
	return 0;
}
int comp2(const void *elem1, const void *elem2){
	int f = *((int *)elem1);
	int s = *((int *)elem2);
	if(f > s) return -1;
	if(f < s) return 1;
	return 0;
}
int main(){
	int a[50],b[50],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	qsort(a,n, sizeof(*a), comp);
	qsort(b,n, sizeof(*b), comp2);
	for(i=0;i<n;i++){
		sum += (a[i] * b[i]);
	}
	printf("%d\n",sum);
	return 0;
}
