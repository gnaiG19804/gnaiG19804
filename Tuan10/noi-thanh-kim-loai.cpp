//tham lam
#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int>>q;
	int n,x;
	cin>>n;
 	while(n--){
		cin>>x;
		q.push(x);
	}
	int a,b,s=0,res=0;
	while(q.size()>1){
		a=q.top();q.pop();
		a+=q.top();q.pop();
		res+=a;
		q.push(a);
	}
	cout<<res;
}