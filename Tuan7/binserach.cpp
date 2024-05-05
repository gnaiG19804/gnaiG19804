#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={3,7,10,10,12,17,22,45,64,64,87};
	int n =sizeof(a)/sizeof(int);
	int *p=lower_bound(a,a+n,10);cout<<*p<<" "<<"tai vi tri "<<p-a<<endl;
	int *q=upper_bound(a,a+n,10);cout<<*q<<" "<<"tai vi tr "<<q-a<<endl;
}