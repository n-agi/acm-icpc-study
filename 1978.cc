#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n==0 || n==1) return false;
	bool iP = true;
	for(int i = 2; i<=sqrt(n) ; i++){
		if(n % i == 0){
			iP = false;
			break;
		}
	}
	return iP;
}
int main(){
	int n;
	int t;
	int c=0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> t;
		if(isPrime(t)) c++;
	}
	cout << c << endl;
}
