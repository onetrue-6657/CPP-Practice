#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 110;

string x, y, z = "";

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> x >> y;
    int len = max(x.length(), y.length());
    int a[len] = {0}, b[len] = {0}, c[len + 1] = {0};
    for (int i = 0; i < x.length(); i++) {
        a[i] = x[x.length() - i - 1] - '0';
    }
    for (int i = 0; i < y.length(); i++) {
        b[i] = y[y.length() - i - 1] - '0';
    }
    for (int i = 0; i < len; i++) {
        c[i] += a[i] + b[i];
        if (c[i] >= 10) {
            c[i + 1]++;
            c[i] %= 10;
        }
    }
    if (c[len] != 0) z += to_string(c[len]);
    for (int i = len - 1; i >= 0; i--) {
        z += to_string(c[i]);
    }
    cout << z << endl;

    return 0;
}