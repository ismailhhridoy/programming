#include <stdio.h>

// 1.with parameter and return
int evenodd_function(int x)
{
    if (x % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}



int main()
{

    int n;
    scanf("%d", &n);

    int val= evenodd_function(n);
   
    if (val == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}