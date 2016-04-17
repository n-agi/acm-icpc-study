#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	map<string, int> umap;
	map<string, int> res;
	int n,m;

	string s;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> s;
		umap[s] = 1;
	}
	for(int i = 0 ; i < m ; i++){
        cin >> s;
        umap[s] += 1;
	}
	cout << res.size() << endl;
	for(auto i = res.begin() ; i != res.end() ; i++){
		if(i->second == 2)
			cout << i->first << endl;
	}
}

