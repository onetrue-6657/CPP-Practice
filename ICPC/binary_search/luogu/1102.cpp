/* P1102 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 200020;
ll n, c, a[N];

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> c;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    
    return 0;
}