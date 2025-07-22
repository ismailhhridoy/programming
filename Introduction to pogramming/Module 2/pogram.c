// Take a number from user and check if its a even number or odd number.

#include <stdio.h>

int main(){

    int numbercheck;
    scanf("%d", &numbercheck);
    if(numbercheck%2 == 0){
        printf("Even Number");
    }else{
        printf("Odd Number");
    }

}