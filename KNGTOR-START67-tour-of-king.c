//Problem Code:KNGTOR
//Contest Code:START67
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int N[T], M[T];
    for (int i=0; i<T; i++) {
        scanf("\n%d %d", &N[i], &M[i]);
    }
    for (int i=0; i<T; i++) {
        printf("\n%d", ((N[i]*5) + (M[i]*7)));
    }
    return 0;
}
