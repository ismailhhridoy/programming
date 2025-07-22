#include <stdio.h>

// return_type function_name ( parameters )
// {
//     //code
//     return statement;
// }

int add() // declare function,
{

    int x, y;
    scanf("%d %d", &x, &y);
    int ans = x + y; // what will do parameter
    return ans;      // function return
}

int main()
{

    printf("%d", add()); // function call without input

    return 0;
}