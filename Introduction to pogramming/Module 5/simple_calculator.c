// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

// #include <stdio.h>

// int main() {
//     int X,Y;
//     scanf("%d %d",&X,&Y);

//     if (X>=1 && Y<=10^5)
//     {
//         int summation = X+Y;
//         printf("%d + %d = %d\n",X, Y, summation);
        
//         int multiplication = X*Y;
//         printf("%d * %d = %d\n",X, Y, multiplication);
    
//         int subtraction = X-Y;
//         printf("%d - %d = %d\n",X, Y, subtraction);
//     }
    
//     return 0;
// }


#include <stdio.h>

int main() {
    long long int X, Y;
    scanf("%lld %lld", &X, &Y);

    long long int sum= X+Y;
    long long int mul= X*Y;
    long long int sub= X-Y;

    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, mul);
    printf("%lld - %lld = %lld\n", X, Y, sub);

    return 0;
}
