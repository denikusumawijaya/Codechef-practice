//Problem Code:AGELIMIT
//Contest Code:START42
#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T], Y[T], A[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d %d\n", &X[i], &Y[i], &A[i]);
    }
    for (int i=0; i<T; i++) {
        if (A[i] >= X[i] && A[i] < Y[i]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
