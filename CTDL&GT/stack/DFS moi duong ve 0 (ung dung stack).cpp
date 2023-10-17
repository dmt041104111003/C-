#include <bits/stdc++.h>
using namespace std;
bool DFS(int s,int f){
	int d[s+5]={}; // mang = 0
//	fill(d,d+s+5,0); cach 2 lm mang = 0
	stack<int> S;
	d[s]=1; S.push(s); while(S.size()){
		int u=S.top(); S.pop(); for(int a=1;a*a<=u;a++) if(u%a==0){int v=(a-1)*(u/a+1); if(d[v]==0 && v>=f){d[v]=1; S.push(v); if(v==f) return true;}}
	}
	return false;
}
int main () {
	int s,f;cin>>s>>f; if(DFS(s,f)) cout<<"1"; else cout<<"0";
	return 0;
}

