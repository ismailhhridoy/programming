#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {

        for (int k = 0; k <  i; k++)
        {
            printf("%c ", k + 'A' );
        }
        
        printf("\n");
   
        
    }
    
    
    // int val=1;
    // int space=n-1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= space; j++)
    //     {
    //         printf(" ");
    //     }
        
    //     for (int k = 1; k <=  val; k++)
    //     {
    //         printf(" %d", k);
    //     }
        
    //     printf("\n");
    //     val++;
    //     space--;
        
    // }
    
    return 0;
}