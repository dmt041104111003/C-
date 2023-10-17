#include <bits/stdc++.h>
#include <stack>
using namespace std;
map<char,int> UT={{'(',0},{'+',1},{'-',1},{'*',2},{'/',2}};
string hauto(string in){
	string out; stack<char> S;
	for(char c:in) if('0'<=c && c<='9') out+=c; 
	else if(c=='(') S.push(c); 
	else if(c==')'){while(S.top()!='('){out+=S.top(); S.pop();}S.pop();} 
	else{while(S.size() && UT[S.top()]>=UT[c]){out+=S.top();S.pop();}S.push(c);} 
	while(S.size()){out+=S.top();S.pop();}
	return out;
}
int tinh(string in){
	stack<int> S;
	for(char c:in) if('0'<=c && c<='9') S.push(c-'0'); // dang la ky tu chuyen sang so nen tru 0
	else {int b=S.top(); S.pop(); int a=S.top(); S.pop(); if(c=='+') S.push(a+b);else if(c=='-') S.push(a-b);else if(c=='*') S.push(a*b); else S.push(a/b);} return S.top();
}
int main () {
	string s,y; cin>>s; cout<<hauto(s)<<endl; y=hauto(s); cout<<tinh(y);
	return 0;
}

