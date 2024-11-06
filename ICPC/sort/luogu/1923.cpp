/* Luogu P1923 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 5000050;
int n, k, l, r;
ll a[N];

void quick_sort(ll a[], int l, int r) {
    if (l >= r) return ;

    int x = a[l + r >> 1], i = l - 1, j = r + 1;

    while (i < j) {
        do i++; while (a[i] < x);
        do j--; while (a[j] > x);
        if (i < j) swap(a[i], a[j]);
    }

    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    quick_sort(a, 0, n - 1);
    printf("%lld", a[k]);
    return 0;
}