#include <stdio.h>

int main() {
    
    int a = 20;
    
    int* ptr; // data type and * and name of pointer variable 
    ptr = &a; // storing a variable location
    
    printf("%p", ptr);


    return 0;
}