#include <bits/stdc++.h>
//cai dat stack
using namespace std;
template <class T>
struct node{
	T elem;
	node *next;
	node(T x, node<T> *N=0) {elem=x; next=N;} // tao 1 node
};
template <class T>
struct Stack{
	int n/*n la so phan tu dang */; node<T> *Head=0;
	Stack(){n=0;Head=NULL;}
	~Stack(){node<T> *p=Head; while(p){Head=p->next; delete []p; p=Head;}}
	int size() {return n;}
	bool empty() {return n==0;}
	T &top() {return Head->elem;}
	void pop() {node<T> *p=Head; Head=p->next; delete[]p; n--;}
	void push(T x) {Head=new node<T>(x,Head);n++;}
};
int main () {
	Stack<int> s;
	for(int x:{24,643,64,765,7,65,7}) s.push(x);
	while(s.size()) {cout<<s.top()<<" ";s.pop();}
	return 0;
}

