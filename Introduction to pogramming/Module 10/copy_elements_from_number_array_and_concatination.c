#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }    
    
    
    int n2;
    scanf("%d", &n2);

    int ar2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int ar3[n+n2];

    for (int i = 0; i < n; i++)
    {
        ar3[i]=ar1[i];
    }

    
    for (int i = 0; i < n2; i++)
    {
        ar3[i+n]=ar2[i];
    }
    
    for (int i = 0; i < n+n2; i++)
    {
        
        printf("%d ", ar3[i]);
    }

    return 0;
}