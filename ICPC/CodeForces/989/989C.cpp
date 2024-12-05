/* CF 989C */

#include <bits/stdc++.h>
// using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> PII;

int t, n, m, res, x, y, i, j;
char a[1010][1010];

void search() {
    if (a[x][y] == 'U') {
        if (x == 0) {
            a[x][y] = 'T';
            res--;
        } else {
            x--;
            if (a[x][y] == 'T') {
                res--;
                a[x + 1][y] == 'T';
            }
            search();
        }
    } 
    if (a[x][y] == 'D') {
        if (x == n - 1) {
            a[x][y] = 'T';
            res--;
        } else {
            x++;
            if (a[x][y] == 'T') {
                res--;
                a[x - 1][y] == 'T';
            }
            search();
        }
    } 
    if (a[x][y] == 'L') {
        if (y == 0) {
            a[x][y] = 'T';
            res--;
        } else {
            y--;
            if (a[x][y] == 'T') {
                res--;
                a[x][y + 1] == 'T';
            }
            search();
        }
    } 
    if (a[x][y] == 'R') {
        if (y == m - 1) {
            a[x][y] = 'T';
            res--;
        } else {
            y++;
            if (a[x][y] == 'T') {
                res--;
                a[x][y - 1] == 'T';
            }
            search();
        }
    } 
    if (a[x][y] == '?') {
        bool b = true;
        if (x != 0 && a[x - 1][y] != 'T') b = false;
        if (x != n - 1 && a[x + 1][y] != 'T') b = false;
        if (y != 0 && a[x][y - 1] != 'T') b = false;
        if (y != m - 1 && a[x][y + 1] != 'T') b = false;
        if (b) {
            a[x][y] = 'T';
            res--;
        }
    }
}

void solve() {
    std::cin >> n >> m;
    res = n * m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            x = i, y = j;
            search();
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            x = i, y = j;
            search();
        }
    }
    std::cout << res << std::endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << a[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
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