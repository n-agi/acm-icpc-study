#include <iostream>
using namespace std;
int main(){
	int n[3],tmp;
	cin >> n[0] >> n[1] >> n[2];
	for(int j = 0 ; j < 2 ; j++){
		for(int i = 0 ; i < 2-j ; i++){
			if(n[i] >= n[i+1]){
				tmp = n[i];
				n[i] = n[i+1];
				n[i+1] = tmp;
			}
		}
	}
	cout << n[0] << " " << n[1] << " " << n[2] << endl;
	return 0;
}
