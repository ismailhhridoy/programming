#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;

    for (int turn = 0; turn < n; turn++) {
        int pick;
        if (cards[l] > cards[r]) {
            pick = cards[l];
            l++;
        } else {
            pick = cards[r];
            r--;
        }

        if (turn % 2 == 0)
            sereja += pick;
        else
            dima += pick;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
