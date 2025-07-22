#include <stdio.h>
void fun(int* p) // created a pointer variable here
{
    *p = 20; // if use dereference, directly go to the location. Here we changed the value
    printf("main function a er address: %p\n", &p);
    

}

int main() {
    int x;
    x = 10;
    fun(&x);

    printf("x value now: %d\n", x);

    printf("main function a er address: %p\n", &x);
    
    
    // printf("main function a er address and fun function er address both different. Here a passing only value, not changes");


    return 0;
}