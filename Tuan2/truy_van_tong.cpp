#include<bits/stdc++.h>

using namespace std;

int main(){
//	int n;
//	cin>>n;
//	long a[n+5];
//	long b[n+5]={};
//	for(int i=1;i<n;i++){
//		cin>>a[i];
//		b[i]=b[i-1]+a[i];
//	}
//	int R,L;
//	int m;
//	cin>>m;
//	while(m--){
//		cin>>L>>R;
//		cout<<b[R]-b[L-1]<<endl;
//	}

	int a[]={4,7,2,8,1,6,3,5};
	int n=sizeof(int);
	partial_sum(a,a+n,a,[](int a,int b){return a+b;});
	for(int x:a){
		cout<<x<<" ";
	}
	
	
}