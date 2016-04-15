#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct _{
	int val;
	_ *prev;
	_ *next;
} node;
int main(){
	int n,m,k;
	int a,d;
	cin >> n >> k;
	node *prev = NULL;
	node *first = NULL;
	node *iter = NULL;
	node *p = NULL;
	for(int i = 1 ; i <= n ; i++){
		p = (node *)malloc(sizeof(node));
		if(i == 1) first = p;
		p->val = i;
		if(prev != NULL) prev->next = p;
		p->prev = prev;
		prev = p;
	}
	p->next = first;
	first->prev = p;
	iter = first;
	cout << "<";
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < k-1 ; j++){
			iter = iter->next;
		}
		if(i != n-1){
			cout << iter->val << ", ";
		}
		else{
			cout << iter->val << ">";
		}
		iter->prev->next = iter->next;
		iter->next->prev = iter->prev;
		iter = iter->next;
	}
	cout << endl;
	return 0;
}
