#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 100010;
int n, q[N], tmp[N];
ll res = 0;

ll merge_sort(int q[], int l, int r) {
    if (l >= r) return 0;
    ll res = 0;
    int mid = l + r >> 1;
    res += merge_sort(q, l, mid);
    res += merge_sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j]) tmp[k++] = q[i++];
        else {
            tmp[k++] = q[j++];
            res += mid - i + 1;
        }
    }

    while (i <= mid) tmp[k++] = q[i++];
    while (j <= r) tmp[k++] = q[j++];

    for (i = l, j = 0; i <= r; i++) q[i] = tmp[j++];
    return res;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    res = merge_sort(q, 0, n - 1);
    cout << res << endl;
    return 0;
}