#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res=2,j=0;
	cin>>n;
	int a[n];
	for(auto &x:a){
		cin>>x;
	}
	sort(a,a+n);
	for(int i=3;i<n;i++){
		while(a[j]+a[j+1]<=a[i]) j++;
		res=max(res,i-j+1);
	}
	cout<<res;
}