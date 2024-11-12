/* AcWing 154 滑动窗口(单调队列) */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 1000010;

int a[N], q[N];
int n, k;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh]) hh++;
        while (hh <= tt && a[q[tt]] >= a[i]) tt--;

        q[++tt] = i;
        if (i >= k - 1) cout << a[q[hh]] << ' ';  
    }
    cout << endl;

    hh = 0, tt = -1;
    for (int i = 0; i < n; i++) {
        if (hh <= tt && i - k + 1 > q[hh]) hh++;
        while (hh <= tt && a[q[tt]] <= a[i]) tt--;

        q[++tt] = i;
        if (i >= k - 1) cout << a[q[hh]] << ' ';  
    }

    return 0;
}