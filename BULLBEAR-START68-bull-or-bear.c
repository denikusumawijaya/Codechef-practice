//Problem Code:BULLBEAR
//Contest Code:START68
#include <stdio.h>

int main() {
    int T;
    scanf("%d\n", &T);
    int X[T], Y[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &X[i], &Y[i]);
    }
    for (int i=0; i<T; i++) {
        if (X[i] > Y[i]) {
            printf("LOSS\n");
        } else if (X[i] < Y[i]) {
            printf("PROFIT\n");
        } else {
            printf("NEUTRAL\n");
        }
    }
    return 0;
}
