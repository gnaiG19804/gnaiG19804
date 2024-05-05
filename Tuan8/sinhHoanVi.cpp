#include<bits/stdc++.h>
using namespace std;
void TRY(int *x,int k,int n){
	if(k-1==n){
		for(int i=1;i<k;i++) cout<<x[i];cout<<endl;return;
	}
	for(int t=1;t<=n;t++){
		int ok=1;
		for(int j=1;j<k && ok;j++){
			if(x[j]==t) ok=0;
		}
		if(ok){
			x[k]=t;
			TRY(x,k+1,n);
		}
	}
}
int main(){
	int n,x[105];cin>>n;
	TRY(x,0,n);
}