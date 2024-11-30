/* CF 989B */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, m, k;

void solve() {
    scanf("%d%d%d", &n, &m, &k);
    char s[n];
    int cnt = 0, res = 0;
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cnt++;
        }
        if (s[i] == '1') {
            cnt = 0;
        }
        if (cnt >= m) {
            for (int j = i; j < i + k && j < n; j++) {
                s[j] = '1';
            }
            cnt = 0;
            res++;
        }
    }

    printf("%d\n", res);
}

int main() {
    // std::ios::sync_with_stdio(0); 
    // std::cin.tie(0);              
    // std::cout.tie(0);          

    scanf("%d", &t);
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