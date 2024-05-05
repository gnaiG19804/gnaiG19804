#include <iostream>
#include <string>

using namespace std;

int countSurprisedStrings(const string& s) {
    string target = "OAO";
    int targetLength = target.length();
    int count = 0;

    int n = s.length();
    int m = targetLength;

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (s[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            ++count;
            i += m - 1;
        }
    }

    return count;
}

int main() {
    string s;cin>>s;
    int result = countSurprisedStrings(s);
    cout << result << endl;

    return 0;
}
