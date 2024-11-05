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

// C = A + B
vector<int> add(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int t = 0;

    for (int i = 0; i < A.size() || i < B.size(); i++) {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }

    if (t) C.push_back(1);
    return C;
}

// C = A - B
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

    auto SUM = add(A, B);
    cout << a << " + " << b << " = ";
    for (int i = SUM.size() - 1; i >= 0; i--) cout << SUM[i];
    cout << endl;

    if (cmp(A, B)) {
        auto DIFFERENCE = subtract(A, B);
        cout << a << " - " << b << " = ";
        for (int i = DIFFERENCE.size() - 1; i >= 0; i--) cout << DIFFERENCE[i];
        cout << endl;
    } else {
        auto DIFFERENCE = subtract(B, A);
        cout << a << " - " << b << " = -";
        for (int i = DIFFERENCE.size() - 1; i >= 0; i--) cout << DIFFERENCE[i];
        cout << endl;
    }

    return 0;
}