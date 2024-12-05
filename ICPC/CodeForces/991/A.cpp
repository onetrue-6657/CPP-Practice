/* Template */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, m, sum, res;

void solve() {
    std::cin >> n >> m;
    sum = 0, res = 0;
    std::string s[n];
    int len[n], pref[n];
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
        len[i] = s[i].length();
    }
    if (n == 1) {
        if (len[0] <= m) std::cout << 1 << std::endl;
        else std::cout << 0 << std::endl;
        return;
    }
    pref[0] = len[0];
    if (pref[0] <= m) res++;
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + len[i];
        if (pref[i] <= m) {
            res++;
        } else {
            break;
        }
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