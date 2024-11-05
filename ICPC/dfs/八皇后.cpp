#include <bits/stdc++.h> // USACO 1.5
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned u32;

int n;
int tb[15];
bool tg[15];

void dfs(int x)
{
    if (x > n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << tb[i] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!tg[i] && !tg[n + 1 - i])
        {
            tg[i] = true;
            tb[x] = i;
            dfs(i + 1);
            tg[i] = false;
            tb[x] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    dfs(1);
    return 0;
}