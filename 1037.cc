#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec;
int main(){
	int n;
	cin >> n;
	vec = vector<int>(n);
	int c = n;
	int ret = 0;
	int w = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	if(c % 2 == 0){
		ret = vec[0] * vec[n-1];
	}
	else{
		if(c == 1){
			w = 0;
		}
		else{
			w = c / 2;
		}
		ret = vec[w] * vec[w];
	}
	cout << ret << endl;
	return 0;
}
