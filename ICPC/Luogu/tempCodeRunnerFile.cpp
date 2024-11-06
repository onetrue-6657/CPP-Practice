/* Luogu P1093 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 301;

int n;
int ch, en, ma;
struct Student {
    int no;
    int chinese;
    int maths;
    int english;
    int total;
} s[N];

bool compare(Student a, Student b) {
    if (a.total != b.total) return a.chinese < b.chinese;
    if (a.chinese != b.chinese) return a.no < b.no;
    return a.total > b.total;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> ch >> ma >> en;
        s[i].no = i;
        s[i].chinese = ch;
        s[i].maths = ma;
        s[i].english = en;
        s[i].total = ch + ma + en;
    }
    sort(s, s + n, compare);
    for (int i = n; i > n - 5 && i > 0; i--) {
        cout << s[i].no << " " << s[i].total << endl;
    }
    return 0;
}