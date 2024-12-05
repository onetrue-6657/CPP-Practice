/* R988D3B */

#include <bits/stdc++.h>
// using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

int t, k, tot, x, y;

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);           

    std::cin >> t;
    while (t--) {
        std::cin >> k;
        int a[k];
        std::unordered_map<int, int> m;
        tot = k - 2;
        for (int i = 0; i < k; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < k; i++) {
            if (tot % a[i] == 0) {
                if (m[tot / a[i]]) {
                    x = a[i];
                    y = tot / a[i];
                    break;
                }
            }
            m[a[i]]++;
        }
        std::cout << x << " " << y << std::endl;
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