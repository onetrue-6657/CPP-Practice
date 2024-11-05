#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

double n, l, r;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin
    cin >> n;
    l = -10001, r = 10001;
    while (r - l >= 1e-8) {
        double mid = (l + r) / 2.0;
        if (mid * mid * mid >= n) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(6) << l << endl;
    return 0;
}