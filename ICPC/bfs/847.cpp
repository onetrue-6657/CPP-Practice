/* AcWing 847 */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
int d[N], q[N];

void add(int a, int b) {
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

int bfs() {
    int hh = 0, tt = 0;
    q[0] = 1;

    memset(d, -1, sizeof(d));

    d[1] = 0;

    while (hh <= tt) {
        int t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] == -1) {
                d[j] = d[t] + 1;
                q[++tt] = j;
            }
        }
    }

    return d[n];
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
    }         

    std::cout << bfs() << std::endl;

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