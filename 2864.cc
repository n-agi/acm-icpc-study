#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	char a[8];
	char b[8];
	int max=0;
	int min=0;
	cin >> a;
	cin >> b;
	for(int i = 0 ; i < 8 ; i++){
		if(a[i] == '6') a[i] = '5';
		if(b[i] == '6') b[i] = '5';
	}
	min = atoi(a) + atoi(b);
	for(int i = 0 ; i < 8 ; i++){
		if(a[i] == '5') a[i] = '6';
		if(b[i] == '5') b[i] = '6';
	}
	max = atoi(a) + atoi(b);
	cout << min << " " << max << endl;
	return 0;
}
