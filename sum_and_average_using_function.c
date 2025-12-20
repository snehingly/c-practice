#include <stdio.h>
int findSum(int arr[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int n,i;
    int arr[100];
    int sum;
    float avg;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sum = findSum(arr,n);
    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
