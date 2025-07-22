#include <stdio.h>

int sum_first_last_digit(int x){
    int first_digit = x%10;
    int last_digit = x/1000;
    int sum = first_digit + last_digit;

    return sum;
}

int main()
{

    int n;
    scanf("%d", &n);    

    int ans= sum_first_last_digit(n);   
    printf("%d", ans);   

    return 0;
}