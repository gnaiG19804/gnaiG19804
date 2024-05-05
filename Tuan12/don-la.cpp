#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9 + 5;
int a[MAX], dp[MAX];
int main() {
    long n, q;
    cin >> n >> q;
    vector<pair<int, int>> queries(q);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x] = 1;
    }
    for(int i = 1; i < MAX; i++) {
        dp[i] = dp[i-1] + a[i];
    }
    while(q>0){
        cin >> queries[i].first >> queries[i].second;
        q--
    }
    for(int i = 0; i < q; i++) {
        cout << dp[queries[i].second] - dp[queries[i].first - 1] << endl;
    }
    return 0;
}