#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,m,x,res=0,t;
	cin>>n>>k>>m;
	queue<int> q;
	for(int i=0;i<n+k-1;i++){
		if(i<n)	cin>>x;
		else x;
		q.push(x);
		while(q.size()>k) q.pop();
		t=0;
		while(q.size() && q.front()+t<=m){
			t+=q.front();
			q.pop();
			}
		if(q.size()){
			q.front()-=m-t;t=m;
		}
		res+=t;
		}	
	cout<<res;
}