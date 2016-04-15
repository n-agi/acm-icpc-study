#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
vector<int> A;
vector<int> B;
int main(){
	int n;
	int s = 0;
	cin >> n;
	A = vector<int>(n);
	B = vector<int>(n);
	for(int i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> B[i];
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end(), greater<int>());
	for(int i = 0 ; i < n ; i++){
		s += (A[i] * B[i]);
	}
	cout << s << endl;
}
