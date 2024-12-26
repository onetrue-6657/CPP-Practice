/* CF 995 D */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

ll n, x, y;
int t;

void solve() {
    std::cin >> n >> x >> y;
    ll res = 0;
    ll sum = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
    }

    std::sort(a, a + n);

    for (int i = 0; i < n; i++) {
        auto l = std::lower_bound(a + i + 1, a + n, sum - a[i] - y);
        auto r = std::upper_bound(a + i + 1, a + n, sum - a[i] - x);
        res += r - l;
    }

    std::cout << res << std::endl;
    
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