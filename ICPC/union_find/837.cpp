/* AcWing 837 */

#include <bits/stdc++.h>
using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

const int N = 100010;

int n, m, a, b;
string s;
int p[N], not_size[N];

int find(int x) {
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        p[i] = i; 
        not_size[i] = 1;
    }
    
    while (m--) {
        cin >> s;
        if (s == "C") {
            cin >> a >> b;
            if (find(a) == find(b)) continue;
            not_size[find(b)] += not_size[find(a)];
            p[find(a)] = find(b);
        } else if (s == "Q1") {
            cin >> a >> b;
            if (find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        } else {
            cin >> a;
            cout << not_size[find(a)] << endl;
        }
    }

    // for (int i = 1; i <= n; i++) cout << p[i] << " ";

    return 0;
}