#include<bits/stdc++.h>
using namespace std;
long M=1e9+7;
long Pow(long a,long n){
	if(n==0) return 1;
	if(n%2) return Pow(a*a%1000,n/2)*a%M;
	return Pow(a*a%M,n/2);
}

int main(){
	long A[100005]={1,1},B[100005]={1,1};
	for(int i=1;i<1e5;i++){
		A[i]=A[i-1]*i%M;
		B[i]=B[i-1]*Pow(i,M-2)%M;
	}
	int n,t,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<A[n]*B[k]%M*B[n-k]%M<<"\n";
	}
}