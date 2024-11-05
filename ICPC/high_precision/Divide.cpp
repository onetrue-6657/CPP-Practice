#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6 + 10;
string a;
int b;
vector<int> A;

vector<int> divide(vector<int> &A, int b, int &r) {
    vector<int> C;
    r = 0;

    for (int i = A.size() - 1; i >= 0; i--) {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }

    reverse(C.begin(), C.end());
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

    int r;
    auto C = divide(A, b, r);

    for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    cout << endl;
    cout << r << endl;

    return 0;
}