//Problem Code:TAXES
//Contest Code:START60

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T];
    for (int i=0; i<T; i++) {
        scanf("%d\n", &X[i]);
    }
    for (int i=0; i<T; i++) {
        if (X[i] > 100) {
            printf("%d\n", X[i]-10);
        } else {
            printf("%d\n", X[i]);
        }
    }
    return 0;
}
