#include <stdio.h>

int main() {
    int n;    
    scanf("%d", &n);
    int ar[n];

    printf("Even Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &ar[i]);

        if (ar[i] % 2 == 0)
        {           
           printf("%d\n", ar[i]);
        }
    }

    printf("Odd Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &ar[i]);

        if (ar[i] % 2 != 0)
        {           
           printf("%d\n", ar[i]);
        }
    }
    
    return 0;
}