#include <stdio.h>
#include <math.h>

int ans[1000];
int idx;
int main(){
	idx =0;
	int x[2],y[2],r[2];
	double xd,yd,rr,d,delta;
	int in,i;
	scanf("%d",&in);
	for(i=0;i < in ; i++){
		rr=0.0;
		d=0.0;
		scanf("%d %d %d %d %d %d", &x[0], &y[0], &r[0], &x[1], &y[1], &r[1]);
		if(x[0] == x[1] && y[0] == y[1] && r[0] == r[1]){
			ans[idx++] = -1;
			continue;
		}
		rr=r[0]+r[1];
		if(x[0]-x[1] < 0.0) xd = x[1]-x[0];
		else xd=x[0]-x[1];
		if(y[0]-y[1] < 0.0) yd = y[1]-y[0];
		else yd=y[0]-y[1];
		d = sqrt((pow(xd,2.0)) + (pow(yd,2.0)));
		printf("\n%f %f\n",rr,d);
		if(rr == d) ans[idx++] = 1;
		else if(rr>d) ans[idx++]=0;
		else ans[idx++]=2;
	}
	for(i =0 ; i < idx ; i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}
