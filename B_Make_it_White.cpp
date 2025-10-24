#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int left = s.find('B');
        int right = s.rfind('B');
        cout << right - left + 1 << endl;
    }
    return 0;
}
