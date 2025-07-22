#include <stdio.h>

// return_type function_name ( parameters )
// {
//     //code
//     return statement;
// }

void add() // declare function with void,
{

    int x, y;
    scanf("%d %d", &x, &y);
    int ans = x + y; // what will do parameter
    printf("%d", ans);  // function print
}

int main()
{
    
    add();

    return 0;
}