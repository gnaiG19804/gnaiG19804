#include<bits/stdc++.h>
//bài toán sắp xếp balo ltol
using namespace std;
int main(){
	int n,a,b,M,q,C[10004]={};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1e4;j>=a;j--){
			C[j]=max(C[j],C[j-a]+b);
		}

	}
		cin>>q;
		while(q--){
			cin>>M;
			cout<<C[M]<<endl;
		}	
}