#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,res=0,j=0;
	cin>>n>>m;
	int a[n],b[m];
	for(auto &x:a){
		cin>>x;
	}
	cout<<endl;
	for(auto &x:b){
		cin>>x;
	}
	sort(a,a+n);sort(b,b+m);
	for(int i=0;i<max(m,n);i++){
		while(j<n && a[j]<= b[i]) j++;
		if(j<n){
			res++;j++;
		} 
	}
	cout<<res;
}