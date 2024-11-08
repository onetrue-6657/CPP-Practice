/* https://open.kattis.com/contests/hev4rj/problems/reachableroads Message Route: Graph BFS */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 200010;

bool visited[N];
int parent[N];
int n, m, a, b, cnt = 0;
unordered_map<int, vector<int>> route;

bool bfs (int n, int m) {
    queue<int> q;
    q.push(n);
    visited[n] = true;
    parent[n] = -1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == m) return true;

        for (int neighbor : route[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n >> m;
    
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        route[a].push_back(b);
        route[b].push_back(a);
    }

    if (bfs(1, n)) {
        vector<int> path;
        for (int v = n; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());

        cout << path.size() << endl;
        for (int v : path) {
            cout << v << " ";
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}