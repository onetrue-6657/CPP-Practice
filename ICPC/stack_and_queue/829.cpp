/* AcWing 829 数组模拟队列 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;
int q[N], tt = 0, hh = 0;
string ope;
int m, x;

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> m;
    while (m--) {
        cin >> ope; 
        if (ope == "push") {
            cin >> x;
            q[tt++] = x;
        } else if (ope == "query") {
            cout << q[hh] << endl;
        } else if (ope == "pop") {
            hh++;
        } else if (ope == "empty") {
            if (hh < tt) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    } 
    return 0;
} 