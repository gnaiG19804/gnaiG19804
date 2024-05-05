#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int L[n];
	int R[n];
	L[0]=a[0];
	for(int i=1;i<n;i++){
		L[i]=max(L[i-1],a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<L[i]<<" ";
	}	
	R[n]=a[n];
	for(int i=n-1;i>=0;i--){
		R[i]=max(R[i+1],a[i]);
	}	
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<R[i]<<" ";
	}
	cout<<endl;
	int z,s=0;
	for(int i=1;i<n-1;i++){
		z=min(L[i-1],R[i+1]);
		s+=z<a[i]?0:(z-a[i]);
	}
	cout<<s;
}