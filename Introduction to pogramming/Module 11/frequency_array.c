#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nar[i]);
    }


    int fre[6] = {0};

    // int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    
    // for (int i = 0; i < n; i++)
    // {
    //     fre[nar[i]]++;
    // }

    for (int i = 0; i < n; i++)
    {
        if (nar[i] == 0)
        {
            fre[nar[i]]++; // nar[i] will give value to find the index and then fre arr will store counted value on the index.
        }
        else if (nar[i] == 1)
        {
            fre[nar[i]]++;
        }
        else if (nar[i] == 2)
        {
            fre[nar[i]]++;
        }
        else if (nar[i] == 3)
        {
            fre[nar[i]]++;
        }
        else if (nar[i] == 4)
        {
            fre[nar[i]]++;
        }else if (nar[i] == 5)
        {
            fre[nar[i]]++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ----- %d\n",i, fre[i]);
    }
    

    // printf("%d\n", count1);
    // printf("%d\n", count2);
    // printf("%d\n", count3);
    // printf("%d\n", count4);
    // printf("%d\n", count5);

    return 0;
}