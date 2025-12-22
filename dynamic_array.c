#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Allocate memory using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements using malloc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Reallocate memory
    int new_n;
    printf("\nEnter new size: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    printf("Enter remaining elements:\n");
    for (i = n; i < new_n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements after realloc:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}
