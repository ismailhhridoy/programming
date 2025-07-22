#include <stdio.h>
#include <string.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int freq_a[M + 1];
    for (int i = 0; i <= M; i++)
    {
        freq_a[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        freq_a[A[i]]++;
    }

    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", freq_a[i]);
    }

    return 0;
}