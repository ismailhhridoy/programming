#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int i, j;

    i=0;
    j=N-1;

    while (i<j)
    {
        int temp = A[i];
        A[i]=A[j];
        A[j]=temp;

        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    
    
    return 0;
}