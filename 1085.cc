#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int x,y,w,h;
	int vmin,hmin;
	cin >>x>>y>>w>>h;

	if((w/2) < x){
		vmin = w-x;
	}
	else{
		vmin = x;
	}
	if((h/2) < y){
		hmin = h-y;
	}
	else{
		hmin = y;
	}
	cout << min(vmin,hmin) << endl;
	return 0;
}
