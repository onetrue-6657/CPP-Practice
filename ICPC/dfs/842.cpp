/* AcWing 842 全排列 */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int n;
bool tag[8];
int arr[8];

void dfs(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!tag[i]) {
            tag[i] = true;
            arr[x] = i;
            dfs(x + 1);
            tag[i] = false;
            arr[x] = 0;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);           
    std::cout.tie(0);            

    std::cin >> n;
    dfs(1);
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