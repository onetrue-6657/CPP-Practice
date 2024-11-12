/* AcWing 828 数组模拟栈 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;
int stk[N], tt = 0;
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
            stk[tt] = x;
            tt++;
        } else if (ope == "query") {
            cout << stk[tt - 1] << endl;
        } else if (ope == "pop") {
            tt--;
        } else if (ope == "empty") {
            if (tt == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    } 
    return 0;
} 