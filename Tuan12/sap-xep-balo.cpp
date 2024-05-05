#include<bits/stdc++.h>
// bài toán sắp xếp balo
using namespace std;
int a[105],b[105],C[105][10000]={},M;
void trace(int n,int M){
	if(C[n][M]==0) return;
	while(C[n][M]==C[n-1][M]) n--;
	trace(n-1,M-a[n]);
	cout<<"Chon vat kt "<<a[n]<<" gia tri "<<b[n]<<endl;
}
int main(){
	int n;
	cin>>n>>M;

	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=M;j++){
			C[i][j]=j<a[i]?C[i-1][j]:max(C[i-1][j],b[i]+C[i-1][j-a[i]]);
		}
	}

	cout<<C[n][M]<<endl;
	trace(n,M);
}
//input:6 11 4 7 3 5 4 8 2 3 2 4 5 9
//output:21
