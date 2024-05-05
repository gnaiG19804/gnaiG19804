#include<bits/stdc++.h>
using namespace std;
double sin(double);
double cos(double);

double sin(double x){
	if(x<1e-5) return x;
	return 2*sin(x/2)*cos(x/2);
}

double cos(double x){
	if(x<1e-5) return 1;
	return pow(cos(x/2),2)-pow(sin(x/2),2);
}

int main(){
	cout<<sin(3.14)<<" "<<cos(3.14);
}