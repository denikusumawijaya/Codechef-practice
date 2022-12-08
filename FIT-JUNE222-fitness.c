//Problem Code:FIT
//Contest Code:JUNE222

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T];
    for (int i=0; i<T; i++) {
        scanf("%d\n", &X[i]);
    }
    for (int i=0; i<T; i++) {
        printf("%d\n", X[i] * 2 * 5);
    }
    return 0;
}
