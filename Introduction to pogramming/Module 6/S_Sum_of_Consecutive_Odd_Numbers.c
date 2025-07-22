#include <stdio.h>

int main() {

    int T;    
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int sum = 0;

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        
        printf("%d\n", sum);
    
        
    }
    
    return 0;
}