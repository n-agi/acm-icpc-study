#include <iostream>
using namespace std;
int main(){
	int day = 0;
	int A,B,V;
	cin >> A >> B >> V;
	day = (V-A)/(A-B);
	cout << day+1<< endl;
}
