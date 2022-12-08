//Problem Code:DETSCORE
//Contest Code:LTIME109

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T], N[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &X[i], &N[i]);
    }
    for (int i=0; i<T; i++) {
        printf("%d\n", (X[i]/10) * N[i]);
    }
    return 0;
}
