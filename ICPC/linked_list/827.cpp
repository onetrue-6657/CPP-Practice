/* AcWing 827 双向链表 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;

int m;
int e[N], l[N], r[N], idx;

void init() {
    r[0] = 1, l[1] = 0;
    idx = 2;
}

void add(int k, int x) {
    e[idx] = x, r[idx] = r[k], l[idx] = k, l[r[k]] = idx, r[k] = idx, idx++;
}

void remove(int k) {
    r[l[k]] = r[k], l[r[k]] = l[k];
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    init();

    cin >> m;
    return 0;
}