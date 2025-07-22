#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // printf("%d %d\n", ar[i], ar[j]);
            if (ar[i] + ar[j] == x)
            {
                flag = 1;
                printf("%d %d Yes ", ar[i], ar[j]);
                
            }
            
        }
        
    }

    if (flag == 0)
    {
        printf("No");
    }
    
    

    return 0;
}