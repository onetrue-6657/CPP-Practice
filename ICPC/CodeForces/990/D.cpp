/* CF 990D */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n;
std::vector<int> a;

void solve() {
    std::cin >> n;
    std::fill(a.begin(), a.end(), 0);
    for (int i = 1; i <= n; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
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