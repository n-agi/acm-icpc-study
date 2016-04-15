#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char dd[51][51]={0, };
char res[51]={0, };
int main() {
	int n;
	bool same = false;
	char d;
	int idx = 0;
	int len = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%s", dd[i]);
	}
	for(int i = 0 ; i < n ; i++){
		if(len < strlen(dd[i])){
			len = strlen(dd[i]);
		}
	}
	for (int i = 0; i < len; i++) {
		same = true;
		d = dd[0][i];
		for (int j = 1; j < n; j++) {
			if (d != dd[j][i]) {
				same = false;
				break;
			}
		}
		if (same) {
			res[idx++] = d;
		}
		else {
			res[idx++] = '?';
		}
	}
	printf("%s\n", res);
	return 0;

}
