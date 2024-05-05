#include<bits/stdc++.h>
using namespace std;
//xâu con chung dài nhất
int C[1005][100]={},n,m;
string x,y;
void trace(int n,int m){
	if(C[n][m]==0) return;
	while(C[n][m]==C[n-1][m]) n--;
	while(C[n][m]==C[n][m-1])m--;
	trace(n-1,m);
	cout<<x[n];
}
int main(){
	cin>>x;n=x.size();x='$'+x;
	cin>>y;m=y.size();y='$'+y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i]==y[i])C[i][j]=C[i-1][j-1]+1;
			else C[i][j]=max(C[i-1][j],C[i][j-1]);
		}
	}
	cout<<C[n][m]<<endl;
	trace(n,m);
}