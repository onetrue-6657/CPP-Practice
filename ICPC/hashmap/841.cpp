/* AcWing 841 */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

const int N = 100010, P = 131;

int m, n;
int l1, r1, l2, r2;
char str[N];
ull h[N], p[N];

ull gethash(int l, int r) {
    return h[r] - h[l - 1] * p[r - l + 1];
}

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);         

    std::cin >> n >> m;
    std::cin >> str + 1;
    p[0] = 1;
    for (int i = 1; i <= n; i++) {
        h[i] = h[i - 1] * P + str[i];
        p[i] = p[i - 1] * P;
    }

    while (m--) {
        std::cin >> l1 >> r1 >> l2 >> r2;
        if (gethash(l1, r1) == gethash(l2, r2)) std::cout << "Yes" << std::endl;
        else std::cout << "No" << std::endl;
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