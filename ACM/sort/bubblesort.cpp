#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int n, q[N];

void bubble_sort(int q[], int n) {
    for (int i = n; i > 1; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (q[j] > q[j + 1]) swap(q[j], q[j + 1]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);            
    cout.tie(0);  
    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    bubble_sort(q, n);
    for (int i = 0; i < n; i++) cout << q[i] << " ";
    return 0;
}