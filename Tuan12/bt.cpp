#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    int a = 0;
    vector<int> v1;
    vector<char> v2;
    v2.push_back('+');
    for (int i = 0; i < x.size(); i++) {
        if (!isdigit(x[i])) {
            v2.push_back(x[i]);
            continue;
        }
        while (i<x.size()&&isdigit(x[i])) {
            a = a * 10 + (x[i] - '0');
            i++;
        }
        i--;
        v1.push_back(a);
        a = 0;
    }
    sort(v1.begin(), v1.end());
    cout << v1[0];
    for (int i = 1; i < v1.size(); i++) {
        cout << v2[i] << v1[i];
    }
    return 0;
}
