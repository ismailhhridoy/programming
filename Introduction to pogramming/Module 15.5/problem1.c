#include <stdio.h>

int my_abs(int a)
{

    int abs = 0;

    if (a < 0)
    {
        abs = -a;
    }else{
        abs = a;
    }
        

    return abs;
}

int main()
{

    int a;

    scanf("%d", &a);

    printf("%d", my_abs(a));

    return 0;
}