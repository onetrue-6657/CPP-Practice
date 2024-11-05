/* AcWing 795 一维前缀和 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 100010;
int n, m, q[N], l, r;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    q[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> q[i];
        q[i] += q[i - 1];
    }
    while (m--) {
        cin >> l >> r;
        cout << q[r] - q[l - 1] << endl;
    }

    return 0;
}