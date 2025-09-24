#include <bits/stdc++.h>
using namespace std;

bool canReach(int n) {
    while (n > 1) {
        if (n % 2 == 0) n /= 2;
        else n -= 3;
    }
    return n == 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (canReach(N)) cout << "YES\n";
        else cout << "NO\n";
    }
}
