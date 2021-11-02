#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int *a, int *b, int n1, int n2)
{
    int *c = (int *)malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)    {

        if (a[i] < b[j])

            c[k++] = a[i++];

        else

            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    printf("The new array is:\n");

    for (int x = 0; x < n1 + n2; x++)
        printf("%d ", c[x]);
}

int main(){
    
    int n1, n2, i;
    printf("\nEnter size of 1st array:");
    scanf("%d", &n1);

    int *arr = (int *)malloc(n1 * sizeof(int));
    printf("Enter elements in sorted order:");

    for (i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of 2nd array:");
    scanf("%d", &n2);

    int *brr = (int *)malloc(n2 * sizeof(int));
    printf("Enter elements in sorted order:");
    for (i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    mergeSortedArrays(arr, brr, n1, n2);
    return 0;
}