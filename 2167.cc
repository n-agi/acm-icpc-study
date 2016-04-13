#include <iostream>
using namespace std;
int space[301][301];
int main(){
	int N,M,K;
	int sum = 0;
	int i,j,x,y;
	cin >> N >> M;
	for(int I = 0 ; I < N ; I++){
		for(int J = 0 ; J < M ; J++){
			cin >> space[I][J];
		}
	}
	cin >> K;
	for(int loop = 0 ; loop < K ; loop++){
		sum = 0;
		cin >> i>>j>>x>>y;
		for(int ii = i-1; ii <= x-1 ; ii++){
			for(int jj = j-1 ; jj <= y-1 ; jj++){
				sum += space[ii][jj];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
