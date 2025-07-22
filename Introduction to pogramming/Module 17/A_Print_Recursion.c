#include <stdio.h>

void recursion_fun(int n, int i)
{
    if (i == n)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion_fun(n, i+1);
    
    
}

int main()
{

    int n;
    scanf("%d", &n);

    recursion_fun(n, 0);

    return 0;
}