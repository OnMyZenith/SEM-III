//Rearrange an array with alternate high and low elements.
#include <stdio.h>
int arr[100];

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i += 2) {
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
