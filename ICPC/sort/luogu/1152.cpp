/* P1152 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1010;
int n;
int q[N], d[N];
bool jolly = true;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    int d[n], c[n];
    cin >> q[0];
    for (int i = 1; i < n; i++) {
        cin >> q[i];
        d[i] = abs(q[i] - q[i - 1]);
        c[i] = i;
    }

    sort(d + 1, d + n + 1);

    for (int i = 1; i < n; i++) {
        if (d[i] != c[i]) {
            jolly = false;
            break;
        }
    }

    if (jolly) cout << "Jolly" << endl;
    else cout << "Not jolly" << endl;

    return 0;
}