#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int n, q[N];

void selection_sort(int q[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i; j < n; j++) {
            if (q[j] < q[min]) swap(q[j], q[min]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];

    selection_sort(q, n);

    for (int i = 0; i < n; i++) cout << q[i] << " ";
    return 0;
}