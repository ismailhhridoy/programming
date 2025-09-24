#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;   // number of test cases

    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);

        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }

        int max1 = -1, max2 = -1;
        int idx1 = -1, idx2 = -1;

        for (int i = 0; i < N; i++) {
            if (H[i] > max1) {
                max2 = max1; idx2 = idx1;
                max1 = H[i]; idx1 = i;
            } else if (H[i] > max2) {
                max2 = H[i]; idx2 = i;
            }
        }

        int L = min(idx1, idx2);
        int R = max(idx1, idx2);
        cout << L << " " << R << "\n";
    }

    return 0;
}
