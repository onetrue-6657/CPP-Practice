/* CF 990C */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n;

void solve() {
    std::cin >> n;
    int x[n] = {0}, y[n] = {0};
    int new_x[n] = {0}, new_y[n] = {0};
    std::vector<PII> diff(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> y[i];
    }
    for (int i = 0; i < n; i++) {
        diff[i] = {x[i] - y[i], i};
    }

    std::sort(diff.rbegin(), diff.rend());

    for (int i = 0; i < n; i++) {
        int idx = diff[i].second;
        new_x[i] = x[idx];
        new_y[i] = y[idx];
    }

    std::vector<ll> pre_x(n + 1, 0), suf_y(n + 2, 0);

    for (int i = 1; i <= n; i++) {
        pre_x[i] = pre_x[i - 1] + new_x[i - 1];
    }

    for (int i = n; i >= 1; i--) {
        suf_y[i] = suf_y[i + 1] + new_y[i - 1];
    }

    ll max_cost = LLONG_MIN;
    for (int i = 1; i <= n; i++) {
        ll tot_cost = pre_x[i] + suf_y[i];
        max_cost = std::max(tot_cost, max_cost);
    }

    std::cout << max_cost << std::endl;
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