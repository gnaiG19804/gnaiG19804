#include<bits/stdc++.h>
using namespace std;
void TRY(string x, int n){
	if(x.size()==n) {
	cout<<x<<endl; return;}
	for(char c:{'a','b','c'}){
		TRY(x+c,n);
	}
//	else{
//		TRY(x+"0",n);
//		if(x.size()<2|| not(x.back()=='0' && x[x.size()-2]=='1')) TRY(x+"1",n);
//	}
}
int main(){
	int n;cin>>n;
	TRY("",n);
}