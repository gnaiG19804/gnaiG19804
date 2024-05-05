#include<bits/stdc++.h>
using namespace std;
int main(){
//	priority_queue<int> q; // ưu tiên lớn
	priority_queue<int,vector<int>,greater<int>>q;// ưu tiên bé
	for(auto x:{4,7,2,8,4,8,3,2}) q.push(x);
	while(q.size()){
		cout<<q.top()<<" ";
		q.pop();
	}
}
//output:8 8 7 4 4 3 2 2 ưu tiên lớn
//output:2 2 3 4 4 7 8 8 ưu tiên bé