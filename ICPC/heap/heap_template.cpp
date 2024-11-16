/* Heap Template */

#include <bits/stdc++.h>
// using namespace std;
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

void up(int u) {
    while (u / 2 && h[u / 2] > h[u]) {
        std::swap(h[u / 2], h[u]);
        u /= 2; 
    }
}

void insert(int x) {
    h[++size] = x;
    up(size);
}

int min() {
    return h[1];
}

void remove_min() {
    h[1] = h[size];
    size--;
    down(1);
}

void remove(int k) {
    h[k] = h[size];
    size--;
    down(k);
    up(k);
}

void change(int k, int x) {
    h[k] = x;
    down(k);
    up(k);
}

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);         

    return 0;
}