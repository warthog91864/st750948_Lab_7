#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp, count;
    for (i = 0; i < n - 1; i++) {
        count = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        swaps[i] = count;
    }
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];

    bubbleSort(arr, n, swaps);

    printf("Number of swaps for each index:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }

    return 0;
}