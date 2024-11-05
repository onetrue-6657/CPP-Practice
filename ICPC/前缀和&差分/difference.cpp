/* Difference Algorithm Template */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 100010;
int n, m, l, r, c, q[N], a[N];

void insert(int l, int r, int c) {
    a[l] += c;
    a[r + 1] -= c;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> q[i];
    for (int i = 1; i <= n; i++) insert(i, i, q[i]);
    while (m--) {
        cin >> l >> r >> c;
        insert(l, r, c);
    }
    for (int i = 1; i <= n; i++) a[i] += a[i - 1];
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}