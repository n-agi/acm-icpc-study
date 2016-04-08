#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const char buf[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int input(){
	int res = 0;
	string a;
	cin >> a;
	int r = 1;
	for(int i = a.length()-1 ; i >= 0; i--){
		char t = a.at(i);
		if(t >= '0' && t <= '9')
			res += (t-'0') * r;
		else if(t >= 'A' && t <= 'Z')
			res += (t-'A'+10) * r;
		r *= 36;	
	}
	return res;
}
string output(int val){
	string tmp;
	while(val >= 36){
		tmp += buf[val%36];
		val /= 36;
	}
	tmp += buf[val%36];
	reverse(tmp.begin(), tmp.end());
	return tmp;
}
int main(){
	int n,out = 0;
	int val[50] = {0, };
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		val[i] = input();
	}

	for(int i = 0 ; i < n ; i++){
		out += val[i];
	}
	cout << output(out) << endl;
	return 0;
}
