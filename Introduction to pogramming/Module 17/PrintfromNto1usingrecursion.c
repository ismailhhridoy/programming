// #include <stdio.h>

// void recursion_fun(int i, int n)
// {

    
//     if (n == i)
//     {
//        return;
//     }

//     printf("%d\n", n);
    
//     recursion_fun(i, n-1);
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     recursion_fun(1-1, n);

//     return 0;
// }

// Below printing n to 1    
#include <stdio.h>

void recursion_fun(int i)
{

    if (i == 6)
    {
        return;
    }

    recursion_fun(i + 1);

    printf("%d\n", i);
}

int main()
{

    recursion_fun(1);

    return 0;
}