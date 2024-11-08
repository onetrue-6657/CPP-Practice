/* AcWing 803 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;
int n, cnt = 0;
int l, r;
vector<PII> segs;

void merge(vector<PII> &segs) {
    vector<PII> res;
    sort(segs.begin(), segs.end());

    int st = -2e9, ed = -2e9;
    for (auto seg : segs) {
        if (ed < seg.first) {
            if (st != -2e9) res.push_back({st, ed});
            st = seg.first, ed = seg.second;
        }
        else ed = max(ed, seg.second);
    }
    if (st != -2e9) res.push_back({st, ed});

    segs = res;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        segs.push_back({l, r}); 
    }

    merge(segs);

    cout << segs.size() << endl;

    return 0;
}