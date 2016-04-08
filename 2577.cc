#include <iostream>
using namespace std;
int main(){
	int res = 0;
	int z[10]= {0, };
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	res = a * b * c;
	while(res != 0){
		int d = res % 10;
		z[d]++;
		res /= 10;
	}	
	for(int i = 0 ; i < 10 ; i++){
		cout << z[i] << endl;
	}
}
