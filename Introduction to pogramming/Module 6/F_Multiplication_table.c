#include <stdio.h>

int main() {
    int n; //given input number
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {   
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
    return 0;
}