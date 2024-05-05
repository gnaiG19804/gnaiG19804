#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	stack<int> s;
	set<int> Res;
	cin>>n;
	s.push(n);
	Res.insert(n);
	int z;
	while(s.size()){
		int u=s.top();
		s.pop();
		for(int i=1;i<sqrt(u);i++){
			for(int j=sqrt(u);j<=u;j++){
				if(i*j==u){
					z=(i-1)*(j+1);
					if(Res.find(z)==Res.end()){
						s.push(z);
						Res.insert(z);
						}
				}
			}
		}
	}	
	for(auto x:Res){
		cout<<x<<" ";
	}
	return 0;
}