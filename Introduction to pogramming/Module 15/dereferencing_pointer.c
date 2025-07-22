#include <stdio.h>

int main() {
    
    int a = 20;
    
    printf("a variable location: %p\n", &a); // using p specifier and & can print variable location

    int* ptr;
    ptr = &a;

    printf("ptr variable value: %p\n", ptr);
    printf("ptr variable location: %p\n", &ptr);
    

    *ptr = 40; // dereference (go to the ptr variable value, the location of a variable and change the value of a variable)

    printf("a variable value now: %d\n", a);
    printf("%d\n", *ptr);







    return 0;
}