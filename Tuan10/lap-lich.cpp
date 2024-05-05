#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> sk;
#define db second
#define kt first

int main(){
    int n, res=0;
    cin >> n;
    sk a[n];
    for(auto &x : a) cin >> x.db >> x.kt;
    sort(a, a + n);
    int k = INT_MIN;
    for(auto x : a) {
        if(x.db > k) {
            res++;
            k = x.kt;
        }
    }
    cout << res;
}
