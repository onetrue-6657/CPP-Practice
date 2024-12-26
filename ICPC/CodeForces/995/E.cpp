/* Template */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, k;

void solve() {
    std::cin >> n >> k;
    int a[n], b[n], max = 0, mp = 0;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
        max = std::max(b[i], max);
    }

    for (int i = 1; i <= max; i++) {
        bool pass = true;
        int nr = 0, buy = 0, price = 0;
        for (int j = 0; j < n; j++) {
            if (i <= b[j]) {
                buy++;
                price += i;
            }
            if (i <= b[j] && i > a[j]) nr++;
            if (nr > k) {
                pass = false;
                break;
            }
        }
        if (pass) mp = std::max(price, mp);
    }

    std::cout << mp << std::endl;

    // std::sort(a, a + n);
    // std::sort(b, b + n);

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

/**
 * 1 2 3 4 5 6
 * 
 * 1 2 3 4 5 6
 * 2 3 4 5 6 1 (2)
 * 
 * 2 1 3 4 5 6
 * 1 3 4 5 6 2
 * 2 3 4 5 6 1
 * 3 4 5 6 1 2 (3)
 * 
 * 
 */