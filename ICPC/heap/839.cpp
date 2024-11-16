/* AcWing 839 */

#include <bits/stdc++.h>
// using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

const int N = 100010;

int h[N], ph[N], hp[N], size = 0;

void heap_swap(int a, int b) {
    std::swap(ph[hp[a]], ph[hp[b]]);
    std::swap(hp[a], hp[b]);
    std::swap(h[a], h[b]);
}

void down(int u) {
    int t = u;
    if (u * 2 <= size && h[u * 2] < h[t]) t = u * 2;
    if (u * 2 + 1 <= size && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    if (u != t) {
        heap_swap(u, t);
        down(t);
    }
}

void up(int u) {
    while (u / 2 && h[u / 2] > h[u]) {
        heap_swap(u / 2, u);
        u /= 2; 
    }
}

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);       

    std::string s;
    int n, k, x, m = 0;

    std::cin >> n;

    while (n--) {
        std::cin >> s;
        if (s == "I") {
            std::cin >> k;
            size++;
            m++;
            ph[m] = size, hp[size] = m;
            h[size] = k;
            up(size);
        } else if (s == "PM") {
            std::cout << h[1] << std::endl;
        } else if (s == "DM") {
            heap_swap(1, size);
            size--;
            down(1);
        } else if (s == "D") {
            std::cin >> k;
            k = ph[k];
            heap_swap(k, size);
            size--;
            down(k), up(k);
        } else if (s == "C") {
            std::cin >> k >> x;
            k = ph[k];
            h[k] = x;
            down(k), up(k);
        }
    }

    return 0;
}