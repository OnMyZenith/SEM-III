//Replace every array element with the product of every other element.
#include <stdio.h>
int arr[100];

int main(void) {
    int n;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int product = 1; 
    for (i = 0; i < n; i++) {
        product *= arr[i];
    }
    for (i = 0; i < n; i++) {
        if(product) arr[i] = product/arr[i];
        else
            arr[i] = product;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
