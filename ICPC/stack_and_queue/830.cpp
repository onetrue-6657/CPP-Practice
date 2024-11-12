/* AcWing 830 单调栈 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;

int n;
int stk[N], tt;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (tt && stk[tt] >= x) tt--;
        if (tt) cout << stk[tt] << ' ';
        else cout << -1 << ' ';

        stk[++tt] = x;
    }
    return 0;
} 