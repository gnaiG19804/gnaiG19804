#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	int s,f;
	cin>>s>>f;
	map<int,int> m={{0,s}};
	while(q.size()){
		auto u=q.top();q.pop();
		if(u.first>m[u.second]) continue;
		if(u.second==f) return !cout<<u.first;
		for(int a=1;a*a>=u.first;a++){
			int b=u.first/a;
			pair<int,int> v= {u.first+(b%a ? a+b :b/a),(a-1)*(b+1)};
			if(v.second>=f && (m.find(f.second) == m.end() or m[v.second]>m[v.first])){
				q.push(v);
				m[v.second]=v.first;
			}
	}
	}
	cout<<-1;
}