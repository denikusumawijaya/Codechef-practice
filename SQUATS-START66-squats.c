//Problem Code:SQUATS
//Contest Code:START66

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T];
    for (int i=0; i<T; i++) {
        scanf("%d\n",  &X[i]);
    }
    for (int i=0; i<T; i++) {
        printf("%d\n", X[i] * 15);
    }
    return 0;
}
