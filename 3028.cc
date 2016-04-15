#include <iostream>
using namespace std;
bool D[3];
int main(){
	bool tmp;
	D[0] = true;
	string s;
	cin >> s;
	for(auto i = s.begin() ; i != s.end() ; i++){
		if(*i == 'A'){
			tmp = D[0];
			D[0] = D[1];
			D[1] = tmp;
		}
		else if(*i == 'B'){
			tmp = D[1];
			D[1] = D[2];
			D[2] = tmp;
		}
		else if(*i == 'C'){
			tmp = D[0];
			D[0] = D[2];
			D[2] = tmp;
		}
	}
	for(int i = 0 ; i < 3 ; i++){
		if(D[i] == true){
			cout << i+1 << endl;
			return 0 ;
		}
	}
	return 0;
}
