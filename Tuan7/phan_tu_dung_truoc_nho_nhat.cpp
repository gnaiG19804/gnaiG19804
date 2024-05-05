#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin>>n;
	map<int,int>a;
	while(n--){
		cin>>x;
		auto it=a.upper_bound(-x);
		if(it==a.end()) cout<<0<<endl;
		else cout<<-(*it).first<<(*it).second<<" "<<endl;
		a[-x]++;
	}
}