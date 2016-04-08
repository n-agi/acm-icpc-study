#include <iostream>
#include <string>
using namespace std;
int ans[1000];
int idx;
int main(){
	idx=0;
	int l,i=0;
	while(1){
		cin >> l;
		if(l == 0) break;
		int ball=1;
		for(i=0;i<=l;i++){
			string a;
			getline(std::cin, a);
			while(ball <= a.size() && a[ball-1]!=' ') ++ball;
		}
		ans[idx++]=ball;
	}
	for(int i = 0 ; i < idx ; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
