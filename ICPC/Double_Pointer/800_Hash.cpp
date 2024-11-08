/* AcWing 800 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;
int n, m, x, tmp, resa, resb;
ll a[N], b[N];
unordered_map<int, pair<int, int>> mapA;
unordered_map<int, pair<int, int>> mapB;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mapA[a[i]].first++;
        mapA[a[i]].second = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        mapB[b[i]].first++;
        mapB[b[i]].second = i;
    }

    int i = 0;
    while (a[i] < x) {
        tmp = x - a[i];
        if (mapB[tmp].first == 1) {
            resa = i;
            resb = mapB[tmp].second;
            break;
        }
        i++;
    }

    cout << resa << " " << resb << endl;
    return 0;
}