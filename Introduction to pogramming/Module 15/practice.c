#include <stdio.h>

void fun(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    fun(&a, &b);
    printf("%d %d", a, b);
    
    return 0;
}