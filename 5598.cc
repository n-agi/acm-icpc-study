#include <iostream>
using namespace std;
int main(){
	string table = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s;
	string res;
	cin >> s;
	for(auto i = s.begin() ; i != s.end() ; i++){
		int c = (*i - 'A') - 3;
		if(c < 0){
			c = c + 26;
		}
		res += table[c];
	}
	cout << res << endl;
	return 0;
}
