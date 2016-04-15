#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a1,a2;
	int t;
	int cnt = 0;
	a1 = n / 10;
	a2 = n % 10;
	while(true){
		cnt++;
		t = (a1 + a2) % 10;
		t += (a2 * 10);
		if( t == n){
			break;
		}
		a1 = t / 10;
		a2 = t % 10;
	}
	cout << cnt << endl;
	return 0;
}
