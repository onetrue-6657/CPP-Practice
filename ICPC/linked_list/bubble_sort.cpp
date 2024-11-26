/* AcWing 826 数组模拟链表 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;

const int N = 100010;

int m, k, x;
char o;
int head, e[N], ne[N], idx;
// head: 头结点下标  e: 存储节点  ne：节点的next指针  idx：当前点

void init() {
    head = -1;
    idx = 0;
}

void add_to_head(int x) {
    e[idx] = x, ne[idx] = head, head = idx, idx++;
}

void add(int k, int x) {
    e[idx] = x, ne[idx] = ne[k], ne[k] = idx, idx++;
}

void remove(int k) {
    ne[k] = ne[ne[k]];
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    init();
    add_to_head(6);
    add(1, 5);
    add(2, 3);
    add(3, 4);
    add(4, 1);
    add(5, 2);

    int i = 0;
    int j = 0;
    int max = 100001;
    while (ne[i]) {
        while (ne[j] < max) {
            int a = e[i];
            int b = e[ne[i]];
            if (a > b) {
                int neidx = ne[b];
                ne[b] = i;
                ne[a] = neidx;
            }
        }
        max = b;
    }

    // cin >> m;
    // while (m--) {
    //     cin >> o;
    //     if (o == 'H') {
    //         cin >> x;
    //         add_to_head(x);
    //     } else if (o == 'D') {
    //         cin >> k;
    //         if (!k) head = ne[head];
    //         remove(k - 1);
    //     } else if (o == 'I') {
    //         cin >> k >> x;
    //         add(k - 1, x);
    //     }
    // }
    for (int i = head; i != -1; i = ne[i]) cout << e[i] << " ";
    cout << endl;
    return 0;
}