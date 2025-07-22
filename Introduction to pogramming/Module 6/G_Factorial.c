#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        unsigned long long fact = 1;

        for ( int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        
        
        printf("%llu\n", fact);
    }
    
    return 0;
}