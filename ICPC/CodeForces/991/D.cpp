/* Template */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t;
std::string s;

void solve() {
    std::cin >> s;
    int a[200020] = {0};
    for (int i = 1; i <= s.length(); i++) {
        a[i] = s[i - 1] - '0';
        // for (int i = 1; i <= s.length(); i++) std::cout << a[i];
        // std::cout << std::endl;
    }

    for (int i = 2; i <= s.length(); i++) {
        int j = i;
        while (a[j] - 1 > a[j - 1] && j > 1 && a[j] > 0) {
            int tmp = a[j - 1];
            a[j - 1] = a[j] - 1;
            a[j] = tmp;
            j--;
        }
        // for (int i = 1; i <= s.length(); i++) std::cout << a[i];
        // std::cout << std::endl;
    }

    for (int i = 1; i <= s.length(); i++) std::cout << a[i];
    std::cout << std::endl;
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