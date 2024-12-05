/* CF 990B */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n;
std::string s;

ll factorial[11];

void precompute_factorials() {
    factorial[0] = 1;
    for(int i = 1; i <= 10; i++) {
        factorial[i] = factorial[i - 1] * i;
    }
}

void solve() {
    std::cin >> n >> s;
    std::string best_s = s;
    ll min_perm = LLONG_MAX;
    
    int counts[26] = {0};  // 初始化 counts 数组为 0
    for(char c : s) {
        counts[c - 'a']++;
    }
    ll n_fact = factorial[n];
    ll denom = 1;
    for(int cnt : counts) {
        denom *= factorial[cnt];
    }
    min_perm = n_fact / denom;
    
    for (int i = 0; i < n; i++) {
        char original_char = s[i];
        for (int j = 0; j < n; j++) {
            s[i] = s[j];
            
            int new_counts[26] = {0};  // 初始化 new_counts 数组为 0
            for(char c : s) {
                new_counts[c - 'a']++;
            }
            ll new_denom = 1;
            for(int cnt : new_counts) {
                new_denom *= factorial[cnt];
            }
            ll new_perm = n_fact / new_denom;
            
            if (new_perm < min_perm) {
                min_perm = new_perm;
                best_s = s;
            }
        }
        s[i] = original_char; 
    }
    
    std::cout << best_s << std::endl;
}

int main() {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);       

    precompute_factorials();
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
