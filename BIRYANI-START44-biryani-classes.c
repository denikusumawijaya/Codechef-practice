//Problem Code:BIRYANI
//Contest Code:START44

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T], Y[T];
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &X[i], &Y[i]);
    }
    for (int i=0; i<T; i++) {
        printf("%d\n", X[i] * Y[i]);
    } 
    return 0;
}
