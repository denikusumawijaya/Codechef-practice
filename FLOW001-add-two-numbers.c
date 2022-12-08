//Problem Code:FLOW001
#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int A[T], B[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &A[i], &B[i]);
    }
    for (int i=0; i<T; i++) {
        printf("%d\n", A[i] + B[i]);
    }
    return 0;
}
