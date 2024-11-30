/* CF 989D */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 200020;
int t, n, a[N];
int res, len0, len1, len2;

void solve() {
    std::cin >> n;
    std::vector<PII> p;
    std::vector<int> pos0, pos1, pos2;
    bool inc = true;
    res = 0;
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        if (a[i] == 0) { pos0.push_back(i); }
        if (a[i] == 1) { pos1.push_back(i); }
        if (a[i] == 2) { pos2.push_back(i); }
    }   
    if (n > 1) for (int i = 1; i < n; i++) if (a[i] > a[i + 1]) inc = false;
    
    if (inc || n == 1) std::cout << 0 << std::endl;
    else {
        len0 = pos0.size(), len1 = pos1.size(), len2 = pos2.size();
        if (len0 != 0 && len1 != 0) {
            for (int i = 0; i < len0; i++) {
                for (int j = 0; j < len1; j++) {
                    if (pos0[i] > pos1[j]) {
                        a[pos0[i]]++;
                        a[pos1[j]]--;
                        // std::swap(a[pos0[i]], a[pos1[j]]);
                        std::swap(pos0[i], pos1[j]);
                        sort(pos0.begin(), pos0.end());
                        sort(pos1.begin(), pos1.end());
                        res++;
                        p.push_back({pos0[i], pos1[j]});
                    }
                }
            }
        }

        if (len1 != 0 && len2 != 0) {
            for (int i = 0; i < len1; i++) {
                for (int j = 0; j < len2; j++) {
                    if (pos1[i] > pos2[j]) {
                        // std::swap(a[pos1[i]], a[pos2[j]]);
                        std::swap(pos1[i], pos2[j]);
                        sort(pos2.begin(), pos2.end());
                        sort(pos1.begin(), pos1.end());
                        res++;
                        p.push_back({pos1[i], pos2[j]});
                    }
                }
            }
        }
        
        if (len0 != 0 && len1 != 0) {
            for (int i = 0; i < len0; i++) {
                for (int j = 0; j < len1; j++) {
                    if (pos0[i] > pos1[j]) {
                        // std::swap(a[pos0[i]], a[pos1[j]]);
                        std::swap(pos0[i], pos1[j]);
                        sort(pos0.begin(), pos0.end());
                        sort(pos1.begin(), pos1.end());
                        res++;
                        p.push_back({pos0[i], pos1[j]});
                    }
                }
            }
        }
        
        std::cout << res << std::endl;
        for (const auto &x: p) {
            std::cout << x.first << " " << x.second << std::endl;
        }
    }
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