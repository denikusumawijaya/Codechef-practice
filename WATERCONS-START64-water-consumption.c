//Problem Code:WATERCONS
//Contest Code:START64

#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int X[T];
    for (int i=0; i<T; i++) {
        scanf("%d\n", &X[i]);
    }
    for (int i=0; i<T; i++) {
        if (X[i] >= 2000) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
