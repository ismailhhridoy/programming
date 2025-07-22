#include <stdio.h>
void arr_fun(char x[]) // if we send array to function, it's pass by reference. Meaning it send location.
{

    printf("%s ", x);
}

int main()
{
    char ar[10];
    scanf("%s", ar);

    arr_fun(ar);

    return 0;
}