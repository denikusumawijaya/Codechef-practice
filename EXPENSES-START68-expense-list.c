//Problem Code:EXPENSES
//Contest Code:START68
#include <stdio.h>
int main() {
    int T;
    scanf("%d\n", &T);
    int N[T], X[T], expenses;
    for (int i=0; i<T; i++) {
        scanf("%d %d\n", &N[i], &X[i]);
    }
    for (int i=0; i<T; i++) {
        expenses = pow(2, X[i]);
        for (int j=0; j<N[i]; j++) {
            expenses = expenses - (0.5 * expenses);
        }
        printf("%d\n", expenses);
    }
    return 0;
}
