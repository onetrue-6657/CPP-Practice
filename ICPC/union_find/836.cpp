/* AcWing 836 Union-Find Template */

#include <bits/stdc++.h>
using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair<int, int> PII;

const int N = 100010;

int p[N];
int n, m;

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;

    while (m--) {
        char op;
        int a, b;
        cin >> op >> a >> b;
        if (op == 'M') p[find(a)] = find(b);
        else {
            if (find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}