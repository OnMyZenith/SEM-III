#include <stdio.h>

#define MAX_SIZE 1000

int arr_size;

void insert(int *arr) {
    int elem;
    printf("Element to be inserted : ");
    scanf("%d", &elem);

    if (arr_size == MAX_SIZE) {
        printf("Array is Full!\n");
        return;
    }

    int i;
    for (i = arr_size - 1; (i >= 0) && (arr[i] > elem); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = elem;
    arr_size++;
    return;
}

int search(int *arr) {
    int elem;
    scanf("%d", &elem);
    int first = 0, last = arr_size - 1, mid;
    int found = 0;

    while (first <= last) {
        mid = (first + last) / 2;
        if (elem == arr[mid]) {
            found = 1;
            break;
        } else if (elem < arr[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (!found) {
        printf("Element Not Found!\n");
        return -1;
    }

    printf("Element %d Found at index : %d\n", arr[mid], mid);
    return mid;
}

void delete (int *arr) {

    int mid = search(arr); //func returns -1 if not found

    if (mid + 1) {
        for (int i = mid; i < arr_size; i++)
            arr[i] = arr[i + 1];

        printf("Deleted Element at index : %d\n", mid);
        arr_size--;
    }
    return;
}

void display(int *arr) {

    if (arr_size == 0)
        printf("Array is Empty!\n");

    for (int i = 0; i < arr_size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {};
    int input, keepRunning = 1;
    arr_size = 0;
    printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");

    while (keepRunning) {
        printf("Pick an option : ");
        scanf("%d", &input);
        switch (input) {
        case 1:
            insert(arr);
            break;
        case 2:
            delete (arr);
            break;
        case 3:
            search(arr);
            break;
        case 4:
            display(arr);
            break;
        case 5:
            keepRunning = 0;
            break;

        default:
            printf("Enter only values from 1 to 5!!!\n");
            break;
        }
    }

    return 0;
}