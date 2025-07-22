#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int indx;
    scanf("%d", &indx);

    for (int i = indx; i < N-1; i++)
    {
        
        A[i]=A[i+1];
        
    }
    
    
    // for (int i = 0; i < N; i++)
    // {
        
    //     if (i>=indx)
    //     {
    //         A[i]=A[i+1];
    //     }
        
    // }

    // N--;

    for (int i = 0; i < N-1; i++)
    {
        printf("%d ", A[i]);
    }
    
    
    

    return 0;
}