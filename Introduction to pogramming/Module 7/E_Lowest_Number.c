#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);   
        
    }

    
    int lowest=A[0];
    int position = 0;


    for (int i = 0; i < N; i++)
    {

        if (A[i]<lowest)
        {
            lowest=A[i];
            position=i;            
        }        
        
    }


    printf("%d %d ", lowest, position+1);
    

    
    
    return 0;
}