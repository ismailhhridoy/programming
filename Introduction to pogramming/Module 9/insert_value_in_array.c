#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N+1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int indx, val;
    scanf("%d %d", &indx, &val);

    for (int i = N; i >= indx+1; i--)
    {
        A[i]=A[i-1];
    }

    A[indx]=val;

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", A[i]);
    }
    
    
    

    return 0;
}