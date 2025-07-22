#include <stdio.h>

int main() {
    char A[11];
    scanf("%s", A);
    char B[11];
    scanf("%s", B);

    printf("%d %d\n", strlen(A), strlen(B));

    
    char C[22];

    for (int i = 0; i <= strlen(A); i++)
    {
        C[i]=A[i];
    }
    
    for (int i = 0; i <= strlen(B); i++)
    {
        C[i+strlen(A)]=B[i];
    }    

    printf("%s\n", C);
        
    for (int i = 0; i < 1; i++)
    {
        char temp;
        temp = A[i];
        A[i]=B[i];
        B[i]=temp;
        printf("%s %s\n", A, B);
    }
    

    

    return 0;
}