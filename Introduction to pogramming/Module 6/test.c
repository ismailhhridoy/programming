#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=1;
        if (count % 2 == 0);
        {   
            count++;
            printf("%d\n", count);
        }
    }
    

    // int i = 1;

    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //     }

    //     i++;
    // }
    return 0;
}