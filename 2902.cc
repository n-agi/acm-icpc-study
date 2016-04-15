#include <iostream>
using namespace std;
int main(){
	string s;
	string res;
	cin >> s;
	for(auto i = s.begin() ; i != s.end() ; i++){
		if(res.length() == 0){
			res += *i;
		}
		if(*i == '-'){
			i++;
			res += *i;
		}
	}
	cout << res << endl;
}
