#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<pair<int,int>> q;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		q.push({x,i});
		if(i>=k){
			while(i-q.top().second >= k) q.pop();
			cout<<q.top().first<<endl;
		}
	}
}
//input:n=10 k=3 7 4 2 6 8 4 5 3 7 2
//output: 7 6 8 8 8 5 7 7