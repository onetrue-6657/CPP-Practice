/* R988D3C */

#include <bits/stdc++.h>
// using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

int t, n;

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);
    std::cin >> t;
    while (t--) {
        int x, cnt = 0;
        std::cin >> n;
        bool found = false;
        int res[n];
        if (n < 5) {
            std::cout << -1 << std::endl;
        } else {
            for (int i = 1; i <= n; i += 2) {
                res[cnt] = i;
                cnt++;
            }
            for (int i = 4; i <= n && !found; i += 2) {
                int s = i + res[cnt - 1];
                for (int j = 3; j <= i && !found; j += 2) {
                    if (s % j == 0) {
                        x = i;
                        res[cnt] = x;
                        cnt++;
                        found = true;
                    }
                }
            }
            for (int i = 2; i <= n && i != x; i += 2) {
                res[cnt] = i;
                cnt++;
            }
            for (int i = 0; i < n; i++) {
                std::cout << res[i] << " ";
            }
            std::cout << std::endl;
        }
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