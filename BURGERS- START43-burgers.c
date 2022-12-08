//Problem Code:BURGERS
//Contest Code:START43

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int A[T], B[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &A[i], &B[i]);
    }
    for (int i=0; i<T; i++) {
        if (A[i] < B[i]) {
            printf("%d\n", A[i]);
        } else {
            printf("%d\n", B[i]);
        }
    }
    return 0;
}
