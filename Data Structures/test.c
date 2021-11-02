#include <stdio.h>

void sortDecending(int a[], int n1, int b[], int n2, int res[]) {

    int i = n1 - 1, j = n2 - 1, k = 0;

    while (i >= 0 && j >= 0) {
        if (a[i] > b[j])
            res[k++] = a[i--];
        else
            res[k++] = b[j--];
    }

    while (i >= 0)
        res[k++] = a[i--];

    while (j >= 0)
        res[k++] = b[j--];
}

int main() {
    int n1 = 10, n2 = 12;
    int a[n1], b[n2], res[n1 + n2];
    sortDecending(a, n1, b, n2, res);
    return 0;
}
void printReverse(int *a, int startIndex, int endIndex) {
    if (startIndex > endIndex) {
        return;
    }
    printReverse(a, 0, 5);
    printReverse(a + 1, startIndex + 1, endIndex);
    printf("%d", a[0]);
}
