#include <stdio.h>

// return_type function_name ( parameters )
// {
//     //code
//     return statement;
// }

void add(int x, int y) // declare function with void,
{

    int ans = x + y;   // what will do parameter
    printf("%d", ans); // function print
                       // no return
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);

    return 0;
}