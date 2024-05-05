#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> sk;
bool cmp(sk a, sk b){
	return a.second<b.first;
}
int main(){
	int n,res=0,x=-INT_MAX,y=-INT_MAX;
	cin>>n;
	sk a[n];
	for(auto &k:a) cin>>k.second>>k.first;
	sort(a,a+n,cmp);
	for(auto k:a){
		if(x<y) swap(x,y);
		if(k.second >x) {
			res++;x=k.first;
		}
		else if(k.second>y) {
			res++;y=k.first;
		}
	}
	cout<<res;
}