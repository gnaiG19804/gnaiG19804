#include<bits/stdc++.h>
using namespace std;

long sgom(int n){
	if(n<2) return 1;
	return ((n+1)/2)*((n+1)/2)+sgom(n/2);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<sgom(b)-sgom(a-1);
}