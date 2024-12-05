/* Template */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, q, l, r;

void solve() {
    int a[200020] = {0};
    std::cin >> n >> q;
    for (int i = 1; i <= n; i++) std::cin >> a[i];

    int diff[200020] = {0};
    for (int i = 1; i < n; i++) diff[i] = std::abs(a[i + 1] - a[i]);

    while (q--) {
        int len = r - l + 1;
        std::cin >> l >> r;
        if (l == r) {
            std::cout << 0 << " ";
        } else {
            int b[200020] = {0}, pos = 0, min = INT_MAX;
            for (int i = l; i <= r; i++) {
                b[pos] = a[i];
                // min = std::min(min, b[pos]);
                pos++;
            }

            int m = 1;
            bool found = false, partly_found;
            while (!found) {
                partly_found = true;
                for (int i = 0; i < pos - 1 && partly_found; i++) {
                    if (b[i] % m != b[i + 1] % m) {
                        partly_found = false;
                    }
                }
                if (partly_found) {
                    found = true;
                    std::cout << m << " ";
                    break;
                } 
                m++;
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);             

    std::cin >> t;
    while (t--) solve();

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