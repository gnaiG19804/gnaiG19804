#include<bits/stdc++.h>
using namespace std;
struct cmp{
	bool operator()(int a,int b){
		if(a%3==b%3) return a>b;
		return a%3>b%3;
	}
};
int main(){
	priority_queue<int,vector<int>,cmp> q;
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		q.push(x);
	}
	while(q.size()){
		cout<<q.top()<<" ";q.pop();
	}
}