#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int temp[n];
    int start = 0, end = n - 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            temp[i] = arr[end--]; // Max element
        } else {
            temp[i] = arr[start++]; // Min element
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);

    printf("Array after rearranging in max-min form:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}