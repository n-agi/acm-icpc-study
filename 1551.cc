#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int data[20];
int data2[20];
int main(){
	string s;
	int n,k,d,i=0;
	int loop;
	cin >> n >> k;
	cin >> s;
	stringstream ss;
	ss.str(s);
	while(ss >> d){
		data[i++] = d;
		if(ss.peek() == ',')
			ss.ignore();
	}
	for(int i = 1 ; i < 

}
