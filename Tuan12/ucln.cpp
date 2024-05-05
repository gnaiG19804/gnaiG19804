#include <iostream>

using namespace std;

long long gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long n;
    cin >> n;
    int x = 0;
     for (int i = 1; i < n/2; i++) {
        for (int j = i + 1; j <= n/2; j++) {
            int a = gcd(i, j);
            if (a > x) {
                x = a;
            }
        }
    }
    cout <<x << endl;
    return 0;
}
