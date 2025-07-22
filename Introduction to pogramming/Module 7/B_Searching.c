#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    int found = 0;

    for (int i = 0; i < N; i++)
    {

        if (X==A[i])
        {
            printf("%d", i);
            found = 1;
            break;
        }  
    }

         
    if (found == 0) {
        printf("-1");
    } 
    

    return 0;
}