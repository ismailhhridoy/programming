#include <stdio.h>
void fun(int x)
{
    x = 20;
    

}

int main() {
    int x;
    x = 10;
    fun(x);
    printf("x value: %d\n", x);
    printf("main function a er address: %p\n", &x);
    
    printf("main function a er address and fun function er address both different. Here a passing only value, not changes");


    return 0;
}