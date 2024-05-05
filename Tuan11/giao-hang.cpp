#include<bits/stdc++.h>
//giao hàng
using namespace std;
vector<int>a[10005];
int main(){
	priority_queue<long> q;
	long n,m=0,res=0;cin>>n;
	long t,v;
	for(int i=0;i<n;i++){
		cin>>t>>v;
		m=max(m,t);
		a[t].push_back(v);
	}
	for(int i=m;i>=1;i--){
		for(auto x:a[i]){
			q.push(x);
		}
		if(q.size()){
			res+=q.top();
			q.pop();
		}
	}
	cout<<res;
}
//intput: 6 3 5 3 7 1 3 2 4 2 2 4 1
//output:17