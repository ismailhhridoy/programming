#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0], max = A[0];
    int min_index = 0, max_index = 0;

    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            min_index = i;
        }
        if (A[i] > max) {
            max = A[i];
            max_index = i;
        }
    }

    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}