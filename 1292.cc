#include <iostream>
using namespace std;

int N[1000];
int main(){
	int a,b,res=0;
	int idx=0;
	int j = 1;
	while(idx < 1000){
		for(int i = 0 ; i < j ; i++){
			N[idx++] = j;
			if(idx >= 1000) break;
		}
		j++;
	}
	cin >> a >> b;
	for(int i = a-1 ; i < b; i++){
		res += N[i];
	}
	cout << res << endl;
	return 0;
}
