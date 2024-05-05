#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>a;
	while(n--){
		int x;
		cin>>x;
		if(a.empty() || a.back()<x){
			a.push_back(x);
		}
		else{
			//*lower_bound(a.begin(),a.end(),x)=x;
			*upper_bound(a.begin(),a.end(),x)=x;
		}
	}
	cout<<a.size();
}