/* Template */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n;

void solve() {
    ll a[200020] = {0};
    ll sum = 0, avg = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        sum += a[i];
    }
    if (sum % n != 0) {
        std::cout << "NO" << std::endl;
        return;
    } else {
        avg = sum / n;
    }
    for (int i = 2; i <= n - 1; i++) {
        if (a[i - 1] < avg) {
            a[i + 1] -= (avg - a[i - 1]);
            a[i - 1] = avg;
        } else {
            a[i + 1] += (a[i - 1] - avg);
            a[i - 1] = avg;
        }
    }

    // for (int i = 1; i <= n; i++) {
    //     std::cout << a[i] << " ";
    // }
    // std::cout << std::endl;

    for (int i = 1; i <= n; i++) {
        if (a[i] != avg) {
            std::cout << "NO" << std::endl;
            return;
        }
    }
    std::cout << "YES" << std::endl;
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