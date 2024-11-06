/* P1781 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int n;
struct cand {
    int num;
    string poll;
} c[21];

bool compare(cand a, cand b) {
    if (a.poll.size() != b.poll.size()) return a.poll.size() > b.poll.size();
    for (int i = 0; i < a.poll.size(); i++) {
        if (a.poll[i] != b.poll[i]) return a.poll[i] > b.poll[i];
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i].poll;
        c[i].num = i + 1;
    }
    sort(c, c + n, compare);
    cout << c[0].num << endl << c[0].poll << endl;
    return 0;
}