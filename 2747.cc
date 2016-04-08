#include <iostream>
using namespace std;
int fibo(int n);
int memo[46] = {0,1,1,0,};
void gen(int n){
	for(int i = 0 ; i < 46 ; i++){
		fibo(n);
	}	
}
int fibo(int n){
	if(n == 1 || n == 2) return 1;
	if(memo[n] != 0) return memo[n];
	memo[n] = fibo(n-1) + fibo(n-2);
	return memo[n];
}
int main(){
	int n=0;
	cin >> n;
	gen(n);
	cout << memo[n] << endl;
}
