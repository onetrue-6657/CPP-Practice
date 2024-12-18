#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6 + 10;

string a, b;
vector<int> A, B;

bool cmp(vector<int> &A, vector<int> &B) {
    if (A.size() != B.size()) return A.size() > B.size();
    for (int i = A.size() - 1; i >= 0; i--) {
        if (A[i] != B[i]) return A[i] > B[i];
    }
    return true;
}

vector<int> subtract(vector<int> &A, vector<int> &B) {
    vector<int> C;
    for (int i = 0, t = 0; i < A.size(); i++) {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
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
    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');

    if (cmp(A, B)) {
        auto C = subtract(A, B);
        for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    } else {
        auto C = subtract(B, A);
        cout << "-";
        for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    }

    return 0;
}