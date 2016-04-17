#include <iostream>
using namespace std;
bool arr[1000000]={1,};
int ans[4];
int idx;
void eratos(int n){
	if(n<=1) return;
	for(int i = 2; (i*i)<=n;i++){
		if(arr[i]){
			for(int j = i*i ; j<= n ; j+=i) arr[j]=false;
		}
	}
}
int main(){
	eratos(1000000);
	int n;
	cin >> n;
	int rec=2;
	while(rec!=1000000){
		if(n % rec == 0){
			ans[idx++]=rec;
			n = n/rec;
			continue;
		}
		else{
			rec++;
		}
	}
	if(idx != 4){
		cout << "-1" << endl;
	}
	else{
		for(int i = 0 ; i < 4 ; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
