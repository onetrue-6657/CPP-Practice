/* AcWing 801 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int lowbit(int x) {
    return x & -x;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;

        int res = 0;
        while (x) x -= lowbit(x), res++;

        cout << res << ' ';
    }

    return 0;
}