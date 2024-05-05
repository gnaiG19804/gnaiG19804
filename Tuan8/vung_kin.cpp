#include<bits/stdc++.h>
using namespace std;
int a[205][205],m,n,res=0;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
pair<int,int> Next[]={{0,1},{1,0},{1,-1},{-1,0}};
void DFS(int u,int v){
	a[u][v];
	for(auto z:Next)
		if(a[u+z.first][v+z.second]==0) DFS(u+z.first,v+z.second);
}
int main(){
	cin>>m>>n;
	FOR(i,1,m)
	FOR(j,0,n+1) cin>>a[i][j];
	FOR(i,0,n+1) a[i][0]=a[i][m+1]=1;
	FOR(j,0,m+1) a[0][j]=a[n+1][j]=1;
	FOR(i,1,n){
		if(a[i][1]==0) DFS(i,1);
		if(a[i][m]==0) DFS(i,m);
	}
	FOR(j,1,m){
		if(a[1][j]==0) DFS(1,j);
		if(a[n][j]==0) DFS(n,j);
	}
	FOR(i,1,n)
	FOR(j,1,m) if(a[i][j]==0) {
		res++;
		DFS(i,j);
	}
	cout<<res;
}