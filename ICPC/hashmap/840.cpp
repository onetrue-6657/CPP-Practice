/* AcWing 840 */

#include <bits/stdc++.h>
// using namespace std;
#define long long ll;
#define unsigned long long ull;
#define pair <int, int> PII;

int n, x;
char a[2];
std::unordered_map<int, int> m;

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);          

    std::cin >> n;
    while (n--) {
        std::cin >> a >> x;
        if (a[0] == 'I') {
            m[x] = true;
        } else if (a[0] == 'Q') {
            if (m[x]) std::cout << "Yes" << std::endl;
            else std::cout << "No" << std::endl;
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