//quy hoạch động
#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,x,res,C;cin>>n>>res;C=res;
	while(--n){
		cin>>x;
		C=C>0?C+x:x;
		res=max(res,C);
	}
	cout<<res;
}
//UCLN
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int a,b;
// 	B1: 
// 		cout<<"a = ";cin>>a;
// 		cout<<"b = ";cin>>b;
// 	B2:
// 		if (a!=b) 
// 		{
// 			a>b?a-=b:b-=a;
// 			goto B2;
// 		}
// 	B3:
// 		cout<<"uoc chung lon nhat "<<a;
// }