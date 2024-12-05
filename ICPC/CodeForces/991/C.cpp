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
    bool res = false;
    int rem = 0, sum = 0, two = 0, three = 0;
    for (int i = 0; i < s.length(); i++) {
        int dgt = s[i] - '0';
        sum += dgt;
        if (dgt == 2) two++;
        if (dgt == 3) three++;
    }

    rem = (9 - sum % 9) % 9; 

    if (rem == 0) {
        std::cout << "YES" << std::endl; 
        return;
    }

    for (int a = 0; a <= two; a++) {
        for (int b = 0; b <= three; b++) {
            int total_increase = 2 * a + 6 * b;
            if (total_increase % 9 == rem) {
                res = true;
                break;
            }
        }
        if (res) break;
    }
    // rem = sum % 9;
    // if (rem == 0) res = true;
    // rem = 9 - rem;
    // if (rem == 0) {
    //     res = true;
    // } else if (rem == 1) { // 1, 10, 19, 28
    //     if (two >= 5) res = true;
    //     if (two >= 2 && three >= 1) res = true;
    // } else if (rem == 2) { // 2, 11, 20, 29, 38, 47, 56
    //     if (two >= 1) res = true;
    // } else if (rem == 3) { // 3, 12, 21
    //     if (two >= 6) res = true;
    //     if (three >= 2) res = true;
    //     if (two >= 3 && three >= 1) res = true;
    // } else if (rem == 4) { // 4, 13, 22
    //     if (two >= 2) res = true;
    // } else if (rem == 5) { // 5, 14, 23, 32
    //     if (two >= 4 && three >= 1) res = true;
    //     if (two >= 1 && three >= 2) res = true;
    // } else if (rem == 6) { // 6, 15, 24, 33
    //     if (three >= 1) res = true;
    //     if (two >= 3) res = true;
    // } else if (rem == 7) { // 7, 16, 25, 34, 43
    //     if (two >= 2 && three >= 2) res = true;
    //     if (two >= 5 && three >= 1) res = true;
    // } else if (rem == 8) { // 8, 17, 26
    //     if (two >= 4) res = true;
    //     if (two >= 1 && three >= 1) res = true;
    // } 

    if (res == true) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
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