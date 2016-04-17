#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if(b == 0) { return a; } 
	else {
		return gcd(b, a % b);
	}
}
int main(){
	int n;
	cin >> n;
	int a,b;
	int g;
	int l;
	for(int i = 0 ; i < n ; i++){
		cin >> a >> b;
		g = gcd(a,b);
		l = g * (a/g) * (b/g);
		cout << l << " " << g << endl;
	}
}
