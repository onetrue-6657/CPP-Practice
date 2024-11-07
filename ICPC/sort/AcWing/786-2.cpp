/* AcWing 786 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 100010;
int n, k, q[N];

int quick_sort(int l, int r, int k) {
    if (l == r) return q[l];

    int x = q[l + r >> 1], i = l - 1, j = r + 1;
    while (i < j) {
        while (q[++i] < x);
        while (q[--j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    int sl = j - l + 1;
    if (k <= sl) return quick_sort(l, j, k);
    
    return quick_sort(j + 1, r, k - sl);
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> q[i];

    cout << quick_sort(0, n - 1, k) << endl;

    return 0;
}