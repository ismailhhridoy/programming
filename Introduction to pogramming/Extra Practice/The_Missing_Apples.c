#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int initial;
    scanf("%d", &initial);
    
    int given;
    scanf("%d", &given);
    
    int bought;
    scanf("%d", &bought);

    int apple_after_given = initial - given;
    int apple_now = apple_after_given + bought;

    printf("%d", apple_now);

    return 0;
}
