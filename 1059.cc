#include <iostream>
using namespace std;
bool data[1001];
int main(){
	int L;
	int t;
	int n;
	int c=0;
	cin >> L;
	for(int i = 0 ; i < L ; i++){
		cin >> t;
		data[t]=1;
	}
	cin >> n;
	for(int i = n+1 ; i <= 1000 ; i++){
		if(data[i] == 1) break;
		c++;
	}
	cout << c << endl;
	return 0;
}
