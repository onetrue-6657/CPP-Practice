/* CF 995 B */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t;
int a, b, c, n, ans;

void solve() {
    ans = 0;
    std::cin >> n >> a >> b >> c;
    if (a >= n) {
        std::cout << 1 << std::endl;
        return;
    }
    if (a + b >= n) {
        std::cout << 2 << std::endl;
        return;
    }
    if (a + b + c >= n) {
        std::cout << 3 << std::endl;
        return;
    }
    int sum = a + b + c;
    if (n % sum == 0) {
        std::cout << (n / sum) * 3 << std::endl;
        return;
    }   
    int x = n / sum;
    n = n - (sum * x);
    if (a >= n) {
        std::cout << 3 * x + 1 << std::endl;
        return;
    }
    if (a + b >= n) {
        std::cout << 3 * x + 2 << std::endl;
        return;
    }
    if (a + b + c >= n) {
        std::cout << 3 * x + 3 << std::endl;
        return;
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