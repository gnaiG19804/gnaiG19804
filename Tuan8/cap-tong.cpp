#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,M;
	cin>>n>>M;
	int a[n];
	for(auto x:a){
		cin>>x;
	}
	int *p;
	sort(a,a+n);
	int rel=0;
	for(int i=1;i<n;i++){
		rel+=upper_bound(a,a+i,M-a[i])-a;
	}
	cout<<rel;
}