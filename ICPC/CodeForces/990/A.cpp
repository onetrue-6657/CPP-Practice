/* CF 990A */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, a, sum, res;

void solve() {
    std::cin >> n;
    sum = 0, res = 0;
    while (n--) {
        std::cin >> a;
        sum += a;
        int x = 1;
        while (x * x <= sum) {
            if (x * x == sum) {
                res++;
                break;
            }
            x += 2;
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