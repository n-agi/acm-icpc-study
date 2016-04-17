#include <iostream>
using namespace std;
bool D[3];
int main(){
	D[0] = 1;
	int n;
	int a,b;
	bool tmp;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a >> b;
		if(a==b) continue;
		tmp = D[a-1];
		D[a-1] = D[b-1];
		D[b-1] = tmp;
	}
	for(int i = 0 ; i < 3 ; i++){
		if(D[i] == true){
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}
