#include <iostream>
using namespace std;

int main(){
	int n=0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int s = 0, sum = 0,nn=0;
		cin >> s;
		sum += s;
		cin >> nn;
		for(int i = 0 ; i < nn ; i++){
			int a,b;
			cin >> a >> b;
			sum += (a * b);
		}
		cout << sum << endl;
	}
	return 0;
}
