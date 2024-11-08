/* Basic Bitwise */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// 返回n的最后一位1
int lowbit(int x) {
    return x & -x;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    int n, k;

    int a = n >> k & 1; // 求n的第k位数字

    return 0;
}