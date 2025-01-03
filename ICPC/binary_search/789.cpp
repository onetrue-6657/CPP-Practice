#include <bits/stdc++.h>
using namespace std;

const int N = 100010;

int n, m, q[N];

int main() {
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> q[i];
    
    while (m--) {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + r >> 1;
            if (q[mid] >= x) r = mid;
            else l = mid + 1;
        }

        if (q[l] != x) cout << "-1 -1" << endl;
        else {
            cout << l << ' ';

            int l = 0, r = n - 1;
            while (l < r) {
                int mid = l + r + 1 >> 1;
                if (q[mid] <= x) l = mid;
                else r = mid - 1;
            }

            cout << l << endl;
        }
    }
    return 0;
}