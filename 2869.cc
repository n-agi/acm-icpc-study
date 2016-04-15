#include <iostream>
using namespace std;
int main(){
	int A,B,V;
	int sum = 0;
	int day = 0;
	cin >> A >> B >> V;
	while(true){
		day++;
		sum += A;
		if(sum >= V){
			break;
		}
		sum -= B;
	}
	cout << day << endl;
	return 0;
}
