#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
vector<unsigned long long> v1;
vector<unsigned long long> v2;
int main(){
	int n;
	cin >> n;
	v1 = vector<unsigned long long>(n);
	v2 = vector<unsigned long long>(n);
	unsigned long long val = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> v1[i] >> v2[i];
	}
	for(int i = 0 ; i < n ; i++){
		val = modpow(v1[i], v2[i],10ULL);
		if(val == 0){
			val = 10;
		}
		cout << val << endl;
	}
}
