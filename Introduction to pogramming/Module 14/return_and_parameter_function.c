#include <stdio.h>

// return_type function_name ( parameters )
// {
//     //code
//     return statement;
// }

int add(int a, int b) //declare function, added 2 parameter 
{

    int ans = a + b; // what will do parameter
    return ans; // function return 
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    
    printf("%d", add(x, y));  // function call

    return 0;
}