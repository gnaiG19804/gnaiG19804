#include <iostream>
#include <cstdlib>.
#include <stack>
#include <algorithm>

using namespace std;

int A[205][205], n, m;

int DFS(int u, int v) {
    int dem = 1;
    A[u][v] = 1;
    stack<pair<int, int>> s;
    s.push({u, v});
    while (!s.empty()) {
        int x = s.top().first, y = s.top().second;
        s.pop();
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++)
                if (1 <= x + i && x + i <= n && 1 <= y + j && y + j <= m && A[x + i][y + j] == 0) {
                    A[x + i][y + j] = 1;
                    s.push({x + i, y + j});
                    dem++;
                }
    }
    return dem;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 2;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int k = 0, G[n * m + 5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == 0) {
                k++;
                G[k] = DFS(i, j);
            }
        }
    }
    sort(G + 1, G + k + 1);
    cout << k << endl;
    for (int i = 1; i <= k; i++) {
        cout << G[i] << " ";
    }
    return 0;
}
