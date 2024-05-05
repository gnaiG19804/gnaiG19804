#include<bits/stdc++.h>
using namespace std;
map<int,long> D;
long zero(int n){
	if(D.find(n)!=D.end()) return D[n];
	if(n==0) return D[n]=1;
	long s=0;
	for(int a=1;a*a<=n;a++){
		if(n%a==0) s+=zero((a-1)*(n/a+1));
	}
	return D[n]=s;
}
int main(){
	cout<<zero(6);
}