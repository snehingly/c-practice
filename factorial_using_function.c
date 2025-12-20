#include <stdio.h>
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++){
        fact= fact *i;
    }
    return fact;
}
int main() {
    int n;

    scanf("%d", &n);
    printf("%d",factorial(n));

    return 0;
}
