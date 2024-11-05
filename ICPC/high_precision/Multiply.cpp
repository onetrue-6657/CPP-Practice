#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6 + 10;
string a;
int b;
vector<int> A;

vector<int> multiply(vector<int> &A, int b) {
    vector<int> C;
    int t = 0;

    for (int i = 0; i < A.size() || t; i++) {
        if (i < A.size()) t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }

    while (C.size() > 1 && C.back() == 0) C.pop_back();
    
    return C;
}

int main()
{
    ios::sync_with_stdio(0); // No more scanf and printf
    cin.tie(0);              // No more binding with cout
    cout.tie(0);             // No more binding with cin

    cin >> a >> b;
    
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');

    auto C = multiply(A, b);
    for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    cout << endl;

    return 0;
}