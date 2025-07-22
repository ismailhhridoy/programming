#include <stdio.h>

int main()
{
    int ar[5] = {11, 5, 12, 15, 30};
    
    printf("%p\n", &ar); // array variable name store 0 number index address

    printf("%d\n", *ar); // array dereference to show array 0 number index value
    
    printf("%p\n", &ar[0]);
    printf("%p\n", &ar[1]);
    printf("%p\n", &ar[2]);
    printf("%p\n", &ar[3]);
    printf("%p\n", &ar[4]);


    *ar = 10; 
    printf("%d\n", *ar); // here dereference to changed the value

    *(ar+1) = 20; // here dereference to changed array 1 number index value
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]); 
    }
     
    

    return 0;
}