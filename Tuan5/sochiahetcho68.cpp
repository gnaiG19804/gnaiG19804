#include<bits/stdc++.h>

using namespace std;

int  main(){
	queue<int> Q;
	map<int ,string> M;	
	int n;
	cin>>n;
	Q.push(8%n);
	M[8%n]="8";	
	Q.push(6%n);
	M[6%n]="6";
	while(Q.size() && M.find(0)==M.end()){
		int u=Q.front();Q.pop();
		int x=(10*u+6)%n;
		if((M.find(x)==M.end())){
			M[x]=M[u]+"6";
			Q.push(x);
		}
		int y=(10*u+8)%n;
		if(M.find(y)==M.end()){
			M[y]=M[u]+"8";
			Q.push(y);
		}
	}
	if(M.find(0)==M.end()){
		cout<<"Khong co";
	}
	else{
		for(auto z:M){
			cout<<z.first<<" "<<z.second<<endl;
		}
	}
}