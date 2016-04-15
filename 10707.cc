#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,d,p;
	int s1,s2;
	s1 = 0;
	s2 = 0;
	cin >> a >> b >> c >> d >> p;
	s1 += p * a;
	s2 += b;
	if(p > c)
		s2 += (p-c) * d;
	cout << min(s1,s2) << endl;
}
