/* Luogu P1605 */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int n, m, t, res = 0;
int sx, sy, fx, fy, x, y;
int maze[6][6];

void dfs(int a, int b) {
    if (a == fx && b == fy) {
        res++;
        return ;
    }
    if (maze[a][b] == 0) {
        maze[a][b] = 1;
        if (a < n && maze[a + 1][b] != 1) {
            a++;
            if (maze[a][b] != -1) {
                dfs(a, b);
                maze[a][b] = 0;
            }
            a--; 
        }
        if (a > 1 && maze[a - 1][b] != 1) {
            a--;
            if (maze[a][b] != -1) {
                dfs(a, b);
                maze[a][b] = 0;
            }
            a++;
        }
        if (b > 1 && maze[a][b - 1] != 1) {
            b--;
            if (maze[a][b] != -1) {
                dfs(a, b);
                maze[a][b] = 0;
            }
            b++;
        }
        if (b < m && maze[a][b + 1] != 1) {
            b++;
            if (maze[a][b] != -1) {
                dfs(a, b);
                maze[a][b] = 0;
            }
            b--;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0);              
    std::cout.tie(0);             

    std::cin >> n >> m >> t;
    std::cin >> sx >> sy >> fx >> fy;
    while (t--) {
        std::cin >> x >> y;
        maze[x][y] = -1;
    }

    dfs(sx, sy);

    std::cout << res << std::endl;

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