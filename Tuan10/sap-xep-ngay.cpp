#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> day;
#define y first
#define m second.first
#define d second.second
int main(){
	int n;
	cin>>n;
	day a[n];
	char c;
	for(auto &x:a){
		cin>>x.d>>c>>x.m>>c>>x.y;
	}
	sort(a,a+n);
	for(auto x:a){
		cout<<x.d<<"/"<<x.m<<"/"<<x.y<<endl;
	}
}