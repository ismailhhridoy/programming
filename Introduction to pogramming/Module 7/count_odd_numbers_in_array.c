#include <stdio.h>

int main() {
    int n;
    int count = 0;    
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &ar[i]);

        if (ar[i] % 2 != 0 && ar[i] != 0)
        {           
           count++;
        }
    }

    printf("Total %d Numbers",count);
    
    return 0;
}