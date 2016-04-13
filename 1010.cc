#include <iostream>
using namespace std;
function<unsigned(unsigned)> fibo1=[](unsigned n)
{
		if(n<=1)
			    	return n;
		return fibo1(n-1)+fibo1(n-2);
};
int main(){
	cout << fibo1(3) << endl;
	return 0;
}
