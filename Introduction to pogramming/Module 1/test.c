#include <stdio.h>

int main() {
    int num1, num2;
    
    // Take input with space between numbers
    printf("Two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print in reverse order
    printf("%d %d\n", num2, num1);

    return 0;
}
