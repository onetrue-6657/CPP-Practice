/* P2676 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 20010;
int n, b, num = 0, sum = 0;
int h[N];

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> b;
    for (int i = 0; i < n; i++) cin >> h[i];

    sort(h, h + n);

    while (sum < b) {
        sum += h[n - num - 1];
        num++;
    }

    cout << num << endl;

    return 0;
}