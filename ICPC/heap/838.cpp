/* AcWing 838 Heap Sort */

#include <bits/stdc++.h>
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

const int N = 100010;

int n, m;
int h[N], size;

void down(int u) {
    int t = u;
    if (u * 2 <= size && h[u * 2] < h[t]) t = u * 2;
    if (u * 2 + 1 <= size && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    if (u != t) {
        std::swap(h[u], h[t]);
        down(t);
    }
}

int main()
{
    std::ios::sync_with_stdio(0); // No more scanf and printf
    std::cin.tie(0);              // No more binding with cout
    std::cout.tie(0);             // No more binding with cin

    std::cin >> n >> m;
    for (int i = 1; i <= n; i++) std::cin >> h[i];
    size = n;

    for (int i = n / 2; i; i--) down(i);

    while (m--) {
        std::cout << h[1] << " ";
        h[1] = h[size];
        size--;
        down(1);
    }

    return 0;
}