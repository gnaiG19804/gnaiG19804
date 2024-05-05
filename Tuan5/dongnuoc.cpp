//BFS
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> TT;
map<TT,TT> P;
void path(TT v){
	if(v.first==0 && v.second==0) cout<<"(0,0)";
	else {(path(P[v]));
	cout<<"->("<<v.first<<", "<<v.second<<")";}
}
int main(){
	int x,y,z;
	int n,m,k;
	cin>>n>>m>>k;
	queue<TT> Q;
	map<TT,int> M;
	M[{0,0}]=0;
	Q.push({0,0});
	while(Q.size()){
		x=Q.front().first;
		y=Q.front().second;
		z=x+y;
		Q.pop();
		TT Next[]={{0,y},{n,y},{x,0},{x,m},{max(0,z-m),min(z,n)},{min(z,n),max(0,z-n)}};
		for(auto a:Next){
			if(M.find(a)==M.end()){
				M[a]=M[{x,y}]+1;
				Q.push(a);
				P[a]={x,y};
				if(a.first==k or a.second==k){
					cout<<M[a]<<endl;
					path(a);
					return 0;
				}
			}
		}
	}
	cout<<"Khong dong duoc";
}