#include <iostream>
#include <vector>
using namespace std;
int D[128][128];
int white;
int blue;
bool valid(int size, int n){
	bool ret = false;
	int s;
	if(size / 2 == 0) s = 1;
	else{
		s = size / 2;
	}
	if(n == (s * s) ){
		blue++;
		ret = true;
	}
	else if (n == 0){
		white++;
		ret = true;
	}
	return ret;
}
void go(int n,int x,int y){
	int ret = 0;
	bool a0, a1,a2,a3,a4;
	if(n == 0){
		return;
	}
	ret = 0;
	for(int i = y ; i < y + n/2 ; i++){
		for(int j = x ; j < x + n/2 ; j++){
			ret += D[i][j];
		}
	}
	a1 = valid(n, ret);
	ret = 0;
	for(int i = y ; i < y + n/2 ; i++){
		for(int j = x + n/2 ; j < x + n ; j++){
			ret += D[i][j];
		}
	}
	a2 = valid(n, ret);
	ret = 0;
	for(int i = y + n/2 ; i < y + n ; i++){
		for(int j = x ; j< x + n/2 ; j++){
			ret += D[i][j];
		}
	}
	a3 = valid(n, ret);
	ret = 0;
	for(int i = y + n/2 ; i < y + n ; i++){
		for(int j = x + n/2 ; j < x + n ; j++){
			ret += D[i][j];
		}
	}
	a4 = valid(n, ret);
	if(!a1)go(n/2,x,y);
	if(!a2)go(n/2,x+n/2,y);
	if(!a3)go(n/2,x,y+n/2);
	if(!a4)go(n/2,x+n/2,y+n/2);
}
int main(){
	int n;
	int x,y=0;
	int split;
	white = 0;
	blue = 0;
	cin >> n;
	split = n;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> D[i][j];
		}
	}
	go(n,0,0);
	cout << white << endl << blue << endl;
}
