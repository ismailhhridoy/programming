#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> vc(n);
    for (int i = 0; i < n; i++) {
        cin >> vc[i];
    }

    map<long long, pair<long long, long long>> mp;

    for (long long i = 0; i < n; i++) {
        long long val = vc[i];
        if (mp.find(val) == mp.end()) {
            mp[val] = {i + 1, i + 1};
        } else {
            mp[val].second = i + 1;
        }
    }

    for (auto &val : mp) {
        cout << val.first << " " << val.second.first << " " << val.second.second << endl;
    }

    return 0;
}