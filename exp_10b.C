#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = &arr[n - 1];

    printf("Array elements in reverse order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;  
    }

    printf("\n");
    return 0;
}
