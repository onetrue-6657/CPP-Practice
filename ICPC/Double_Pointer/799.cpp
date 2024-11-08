/* AcWing 799 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 100010;
int n, q[N], s[N], res;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    for (int i = 0, j = 0; i < n; i++) {
        s[q[i]]++;
        while (s[q[i]] > 1) {
            s[q[j]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }

    cout << res << endl;
    return 0;
}