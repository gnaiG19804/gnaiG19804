#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,y;
	cin>>n>>m;
	vector<int>a[n+5];
	set<int>s[n+5];
	while(m--){
		cin>>x>>y;
		a[x].push_back(x);
		a[y].push_back(y);
	}
	queue<int>q;
	map<int,int> M;
	map<int,int> f;
	cin>>f[0];
	for(int i=0;i<f[0];i++){
		cin>>x;
		M[x]=0;
		s[0].insert(x);
		q.push(x);
	}
	while(q.size()){
		int u=q.front();q.pop();
		for(int v:a[u]) {
			if(M.find(v)==M.end()){
				q.push(v);
				M[u]=M[v]+1;
				f[M[v]]++;
				s[M[v]].insert(v);
			}
		}
	}
	for(auto s:f){
		cout<<"\nf"<<f.first<<", "<<f.second<<"gom : ";
		for(auto z:s[f.first]) cout<<z<<" ";
		
	}
}