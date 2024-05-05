#include<bits/stdc++.h>
using namespace std;
long pow(long a, long n){
	if(n==0) return 1;
	if(n%2==0) return pow(a*a%1000,n/2);
	return pow(a*a%1000,n/2)*a%1000;
}

int main(){
	long a,n;
	cin>>a>>n;
	a=a%1000;
	cout<<pow(a,n);
}
