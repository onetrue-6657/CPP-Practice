/* R988D3A */

#include <bits/stdc++.h>
// using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

int t, n, a;

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);             

    std::cin >> t;
    while (t--) {
        int res = 0;
        std::cin >> n;
        std::unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            std::cin >> a;
            if (m[a] == 1) {
                res++;
                m[a] = 0;
            } else {
                m[a] = 1;
            }
        }

        std::cout << res << std::endl;
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