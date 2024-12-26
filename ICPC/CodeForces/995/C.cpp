/* CF 995 C */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 300030;
int t, n, m, k;

void solve() {
    std::cin >> n >> m >> k;
    int a[m + 1] = {0}, q[k + 1] = {0};
    
    std::unordered_map<int, int> map;
    for (int i = 1; i <= m; i++) std::cin >> a[i];
    for (int i = 1; i <= k; i++) {
        std::cin >> q[i];
        map[q[i]] = 1;
    }

    // for (const auto p: map) {
    //     std::cout << p.first << ": " << p.second << std::endl;
    // }

    if (n > m) {
        for (int i = 1; i <= m; i++) std::cout << 0;
        std::cout << std::endl;
        return;
    }

    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        if (map[a[i]] == 0) cnt++;
    }

    for (int i = 1; i <= m; i++) {
        bool pass = false;
        if (map[a[i]] == 0) {
            if (cnt == 1) pass = true;
        } else {
            if (cnt == 0) pass = true;
        }
        if (pass) std::cout << 1;
        else std::cout << 0;
    }

    std::cout << std::endl;
    return;
}

int main() {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);        

    std::cin >> t;
    while (t--) {
        solve();
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