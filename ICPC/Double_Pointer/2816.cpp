/* AcWing 2816 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;
int a[N], b[N];
int n, m;
bool isChildSeq = true;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0, j = 0; i < n; i++) {
        while (a[i] != b[j] && j < m) {
            if (a[i] != b[j] && n - i > m - j) {
                isChildSeq = false;
                break;
            }
            j++;
        }
        if (j >= m) {
            isChildSeq = false;
            break;
        }
        if (a[i] == b[j]) j++;
    }

    if (isChildSeq) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}