#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int test = 1; test <= T; test++) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        
        int smallsum = 2000000000;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int value = A[i] + A[j] + j - i;
                if (value < smallsum) {
                    smallsum = value;
                }
            }
        }        

        printf("%d\n", smallsum);
    }


    return 0;
}
