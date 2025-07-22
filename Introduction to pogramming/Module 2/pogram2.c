// Take a number from user and check if its a even number or odd number.

#include <stdio.h>

int main(){

    int numbercheck;
    scanf("%d", &numbercheck);
    if(numbercheck > 0){
        printf("Positive Number");
    }
    if(numbercheck < 0){
        printf("Negative Number");
    }
    if(numbercheck == 0){
        printf("Zero");
    }

}