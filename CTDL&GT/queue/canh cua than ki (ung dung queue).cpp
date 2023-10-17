#include <bits/stdc++.h>
using namespace std;
void sol(){
	queue<pair<string,int>> Q;	for(auto x:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"})	Q.push({x,1});
	int n;	cin>>n;
	while(n>Q.front().second){	Q.push(Q.front());	Q.back().second*=2;	n-=Q.front().second;	Q.pop();	}
	cout<<Q.front().first<<"\n";
}
// first : ten, second: tan suat
int main () {
	int test; cin>>test; while(test--) sol();
	return 0;
}
//cach 1	queue<string> Q;
//	for(auto x:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"})	Q.push(x);
//	int n;	cin>>n;
//	while(--n){	Q.push(Q.front());	Q.push(Q.front());	Q.pop();	}
//	cout<<Q.front();
