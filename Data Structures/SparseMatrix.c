#include <stdio.h>

typedef struct SparseMatrix sparsemat;

struct SparseMatrix {
    int row;
    int col;
    int val;
};

void readmat(sparsemat sm[]) {
    printf("Enter no. of rows, columns and non zero elements : ");
    scanf("%d %d %d", &sm[0].row, &sm[0].col, &sm[0].val);
    for (int i = 1; i <= sm[0].val; i++) {
        scanf("%d %d %d", &sm[i].row, &sm[i].col, &sm[i].val);
    }
}

void printmat(sparsemat sm[]) {
    int k = 1;
    for (int i = 1; i <= sm[0].row; i++) {
        for (int j = 1; j <= sm[0].col; j++) {
            if (k <= sm[0].val && i == sm[k].row && j == sm[k].col) {
                printf("%8d", sm[k].val);
                k++;
            } else
                printf("%8d", 0);
        }
        printf("\n");
    }
    printf("\n");
}

// void countingSort(int arr[], int n, int k) {
//     int c[k];
//     for (int i = 0; i < k; i++)
//         c[i] = 0;
//     for (int i = 0; i < k; i++)
//         c[arr[i]]++;
//     for (int i = 1; i < k; i--)
//         c[i] += c[i - 1];
//     for (int i = n - 1; i >= 0; i--) {
//         //
//     }
// }

// void transpose(sparsemat arr[], int n, int k) {
//     sparsemat b[n];
//     int c[arr[0].col];
//     for (int i = 0; i < n; i++) {
//         c[i] = 0;
//     }
//     for (int i = 0; i < n; i++) {
//         c[arr[i].col]++;
//     }
// }

int main() {
    sparsemat a[10], b[10], sum[20];
    readmat(a);
    readmat(b);
    printmat(a);
    printmat(b);
    if (addmat(a, b, sum) == 0)
        printmat(sum);

    return 0;
}