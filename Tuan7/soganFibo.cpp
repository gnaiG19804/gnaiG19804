#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll M=1e9+7;

void Fibo(ll n, ll &a,ll&b){
	if(n==0){
		a=1;b=0;return;
	}
	ll x,y;
	Fibo(n/2,x,y);{
	a=(x*x+y*y%M)%M;
	b=(x*y+y*(x-y))%M;
	}
	if(n%2){
		a=(a+b)%M;b=(a-b)%M;
	}
}
int main(){
	ll n,a,b;
	cin>>n;
	Fibo(n+1,a,b);
	cout<<(a-1+M)%M;
}