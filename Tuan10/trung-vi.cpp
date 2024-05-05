#include<bits/stdc++.h>
//ph?n t? trung v?
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int>>r;
	priority_queue<int> l;
	int n;
	cin>>n;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		i%2? l.push(x):r.push(x);
		if(i>1 && l.top()>r.top()){
			int a=l.top();l.pop();
			int b=r.top();r.top();			
			l.push(b);r.push(a);
		}
		cout<<l.top()<<" ";
	}
}
//input:n=8 7 4 2 3 8 6 5 7
//output:7 4 4 3 4 4 5 5