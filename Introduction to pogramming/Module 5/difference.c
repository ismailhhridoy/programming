#include <stdio.h>
 
int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    long long int X = (long long)A * B - (long long)C * D;
    printf("Difference = %lld\n", X);
    
    return 0;
}