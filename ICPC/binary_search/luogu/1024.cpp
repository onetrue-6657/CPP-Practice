/* P1024 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

double a, b, c, d, x1, x2, l, r;
int s = 0;

double fml(double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> a >> b >> c >> d;

    for (int i = -100; i <= 100; i++) {
        l = i, r = i + 1;
        if (!fml(l)) {cout << fixed << setprecision(2) << l << " "; s++;}
        if (fml(l) * fml(r) < 0) {
            while (r - l >= 0.001) {
                double mid = (l + r) / 2;
                if (fml(l) * fml(r) < 0) l = mid;
                else r = mid;
            }
            cout << fixed << setprecision(2) << r << " ";
            s++;
        }
        if (s >= 3) break;
    }
    
    return 0;
}