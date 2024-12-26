/* CF 995 A */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 101;

int t, n, a[N], b[N], d[N];

void solve() {
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n; i++) std::cin >> b[i];
    if (n == 1) {
        std::cout << a[0] << std::endl;
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        d[i] = a[i] - b[i + 1];
        if (d[i] > 0) sum += d[i];
    }
    sum += a[n - 1];
    std::cout << sum << std::endl;
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