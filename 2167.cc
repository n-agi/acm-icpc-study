#include <iostream>
using namespace std;
int main(){
	int N,M,K;
	cin >> N >> M;
	int space[N][M];
	for(int X = 0 ; X < N ; X++){
		for(int Y = 0 ; Y < M ; Y++){
			cin >> space[X][Y];
		}
	}
	cin >> K;
	int i[K],j[K],x[K],y[K];
	for(int loop = 0 ; loop < K ; loop++){
		cin >> i[loop] >> j[loop] >> x[loop] >> y[loop];
	}
	for(int loop = 0 ; loop < K ; loop++){
		int sum = 0;
		for(int X=i[loop]-1 ; X < M ; X++){
			for(int Y = j[loop]-1 ; Y < N ; Y++){
				sum += space[X][Y];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
