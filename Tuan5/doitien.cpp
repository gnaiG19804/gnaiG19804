#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int max=10^4;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	queue<int >q;
	map<int ,int> m;
	q.push(0);
	m[0]=0;
	while(q.size()){
		int u=q.front();
		q.pop();
		for(auto v:a){
			if(u+v<=max && m.find(u+v)==m.end()){
				q.push(u+v);
				m[v+u]=m[u]+1;
			}
		}
	}
	int tv;
	cin>>tv;
	int z;
	while(tv--){
		cin>>z;
		if(m.find(z)==m.end()){
			m[z]=-1; 
		}
		cout<<m[z]<<endl;
	}
}