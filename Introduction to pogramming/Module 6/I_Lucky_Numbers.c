#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tens = N / 10;      
    int units = N % 10; 


    if ( units % tens == 0 || tens % units == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
