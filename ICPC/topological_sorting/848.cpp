/* AcWing 848 */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int q[N], d[N];

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool topsort() {
    int hh = 0, tt = -1;
    for (int i = 1; i <= n; i++) {
        if (!d[i]) {
            q[++tt] = i;
        }
    }
    while (hh <= tt) {
        int t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            d[j]--;
            if (d[j] == 0) {
                q[++tt] = j;
            }
        }
    }

    return tt == n - 1;
}

int main() {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);             

    std::cin >> n >> m;
    memset(h, -1, sizeof(h));

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        add(a, b);
        d[b]++;
    }

    if (topsort()) {
        for (int i = 0; i < n; i++) {
            std::cout << q[i] << ' ';
        }
        std::cout << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}

/** 
std::cin std::cout std::ios std::endl
std::vector std::deque std::set std::map std::unordered_set std::unordered_map std::array
std::sort std::find std::reverse std::swap
std::string std::to_string
std::pair std::tuple
std::abs std::sqrt std::pow std::sin std::cos std::tan std::log
std::min std::max
std::setprecision
*/