#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int> A= vector<int>(3);
	vector<int> B= vector<int>(2);
	cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	cout << A[0] + B[0] - 50 << endl;
	return 0;
}
