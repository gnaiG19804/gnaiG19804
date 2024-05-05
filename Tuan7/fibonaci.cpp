#include<bits/stdc++.h>
using namespace std;

void Fibo(int n,long a,long b){
	if(n==0){
		a=1;b=0;
		return;
	}
	long x,y;
	Fibo(n/2,x,y);{
	a=x*x+y*y;
	b=x*y+y*(x-y);
}
	if(n%2){
		b=a+b;a=b-a;
	}
}

int main(){
	long a,b;
	int n;cin>>n;
	Fibo(n,a,b);
	cout<<a;
}