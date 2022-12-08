//Problem Code:MAKEAP
//Contest Code:START68
#include <stdio.h>

int main() {
    int T;
    scanf("%d\n", &T);
    int A[T], C[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d", &A[i], &C[i]);
    }
    for (int i=0; i<T; i++) {
        if ((C[i]-A[i])%2 == 0) {
            printf("%d\n", ((C[i]-A[i])/2) + A[i]);
        } else {
            printf("%d\n", -1);
        }
    }
    return 0;
}
