#include <iostream>
using namespace std;

void shiftZeroesToRight(int arr[], int n) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < n) {
        arr[index++] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    int A[1000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    shiftZeroesToRight(A, N);

    return 0;
}
