#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double> Diem;

#define x first
#define y second

double kc(Diem A, Diem B) {
    A.x -= B.x;
    A.y -= B.y;
    return sqrt(A.x * A.x + A.y * A.y);
}

int main() {
    Diem A, B, C, M(0, 0);
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    double eps = 1e-8, d = 10;

    while (d > eps) {
        Diem Next[] = {{M.x - d, M.y}, {M.x + d, M.y}, {M.x, M.y - d}, {M.x, M.y + d}};

        for (auto N : Next) {
            double z = kc(N, A) + kc(N, B) + kc(N, C);
            if (z < d) {
                d = z;
                M = N;
                break;
            }
            d /= 2;
        }
    }

    cout << fixed << setprecision(9) << M.x << " " << M.y;
    return 0;
}
