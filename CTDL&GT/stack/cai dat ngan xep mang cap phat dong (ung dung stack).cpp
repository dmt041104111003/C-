// cai dat stack bang mang
#include <bits/stdc++.h>
#include "stack.cpp"
using namespace std;
int main () {
	STACK <string> s;
	for(auto x:{"ha","noi","mua","khai","giang"}) s.push(x); s.top()="truong";
	STACK <string> z;z=s;
	while (not z.empty()) {cout<<z.top()<<" ";z.pop();}
//	while (not s.empty()) {cout<<s.top()<<" ";s.pop();}
	return 0;
}

