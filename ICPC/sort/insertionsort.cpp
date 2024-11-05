#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1000010;
int q[N], n;

void insertion_sort(int q[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (q[j] < q[j - 1]) swap(q[j], q[j - 1]);
            else break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    insertion_sort(q, n);
    for (int i = 0; i < n; i++) cout << q[i] << " ";
    return 0;
}