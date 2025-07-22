// Pre and post increment and decrement

#include <stdio.h>

int main()
{
    // increment
    // int x = 5;
    // int y = x++;
    // int z = ++y;

    // printf("%d %d %d\n", x, y, z);
    // // printf("%d\n",z++); // Output = 6
    // printf("Z = %d\n", ++z); // Output = 7
    // printf("Z at last = %d", z); 
    // return 0;

    //decrement
    int a = 5;
    int b = a--;
    int c = --b;

    printf("%d %d %d\n", a, b, c);
    printf("c = %d\n", --c); // Output = 3
    printf("c = %d\n", c--); // Output = 3
    printf("c at last = %d", c);
    return 0;
}
