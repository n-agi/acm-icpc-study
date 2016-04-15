#include <iostream>
using namespace std;
int main(){
	int d[26]={0,};
	string s;
	cin >> s;
	for(auto i = s.begin() ; i != s.end() ; i++){
		d[(*i-'a')]++;
	}
	for(int i = 0 ; i < 26 ; i++){
		cout << d[i] << " ";
	}
	cout << endl;
}
