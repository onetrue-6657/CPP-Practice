#include <bits/stdc++.h>
using namespace std;

int n, d, u, v, res = 0;

int main()
{
    cin >> n >> d;
    int a[n + 1][n + 1] = {0};

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> u >> v;
        a[u][v] = 1;
    }

    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1)
            {
                if (a[i][j] == 1)
                {
                    res++;
                }
            }
            else
            {
                if (a[i][j] == 1 && a[i - 1][i] == 1 && j - 1 <= d)
                {
                    res++;
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}