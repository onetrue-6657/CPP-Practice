/* AcWing 796 二维前缀和（子矩阵和） */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1010;
int n, m, x, a[N][N], q[N][N], xa, xb, ya, yb;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m >> x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            q[i][j] = q[i - 1][j] - q[i - 1][j - 1] + q[i][j - 1] + a[i][j];
        }
    }
    
    while (x--) {
        cin >> xa >> ya >> xb >> yb;
        cout << q[xb][yb] - q[xb][ya - 1] - q[xa - 1][yb] + q[xa - 1][ya - 1] << endl;
    }

    return 0;
}