#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,u,v;
	cin>>n>>m;
	vector<int> A[n+5];
	while(m--){
		cin>>u>>v;
		A[u].push_back(v);
		A[v].push_back(v);
	}
	int d[m+5]={},G[n+5]={},k=0;
	for(int i=0;i<=n;i++){
		if(d[i]==0){
			d[i]=++k;
			stack<int> s;
			s.push(i);
			while(s.size()){
				u=s.top();s.pop();
				for(int z:A[u])
				if(d[z]==0){
					d[z]=k;
					s.push(z);
					G[k]++;
				}
			}
		}
	}
	cout<<m<<" "<<n;
	return 0;
}