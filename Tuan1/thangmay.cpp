#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	int n,k,m,s,f;
	cin>>n>>k>>m;
	cin>>s>>f;
	int d[n+5]={};
	q.push(s);
	d[s]=1;
	while(q.size() || d[f]!=0){
		int u=q.front();
		q.pop();
		for(int v:{u+k,u-m})
		if(1<v && v<=n && d[v] ==0){
			d[v]=d[u]+1;
			q.push(v);
		}
	}
}