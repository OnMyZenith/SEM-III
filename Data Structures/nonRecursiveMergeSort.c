#include <stdio.h>
void merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
            B[k++] = arr[i++];
        else
            B[k++] = arr[j++];
    }
    for (; i <= mid; i++)
        B[k++] = arr[i];
    for (; j <= h; j++)
        B[k++] = arr[j];
    for (i = l; i <= h; i++)
        arr[i] = B[i];
}

void iterativeMergeSort(int arr[], int n)
{
    int len=1;
    for (len; len <n; len = len * 2){

        for (int i = 0; i<n; i = i + 2*len){
            int l = i;
            int h=  i+((2*len)-1);
            int mid= (l+h)/2;
            if(h>=n){
                h=n-1; 
            }
            merge(arr, l, mid, h);
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    iterativeMergeSort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}