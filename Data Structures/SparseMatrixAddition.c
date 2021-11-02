//Ankit Kumar 2K20/CO/72 SparseMatrixAddition.c
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

int addmat(sparsemat a[], sparsemat b[], sparsemat sum[]) {

    if (a[0].row != b[0].row || a[0].col != b[0].col) {
        printf("Size of matrices must be equal for addition!\n\n");
        return -1;
    }
    sum[0].col = a[0].col;
    sum[0].row = a[0].row;

    int i = 1, j = 1, k = 1; //i traverses a,j traverses b and k traverses sum
    while (i <= a[0].val && j <= b[0].val) {
        if (a[i].row < b[j].row) {
            sum[k++] = a[i++];
        } else if (a[i].row > b[j].row) {
            sum[k++] = b[j++];
        } else { //rows equal
            if (a[i].col < b[j].col) {
                sum[k++] = a[i++];
            } else if (a[i].col > b[j].col) {
                sum[k++] = b[j++];
            } else { //both rows and cols equal
                sum[k] = a[i++];
                sum[k++].val += b[j++].val;
            }
        }
    }
    while (j <= b[0].val) {
        sum[k++] = b[j++];
    }
    while (i <= a[0].val) {
        sum[k++] = a[i++];
    }

    sum[0].val = k;
    return 0;
}

int main() {
    sparsemat a[10], b[10], sum[20];
    readmat(a);
    readmat(b);
    printf("\nFirst Matrix : \n");
    printmat(a);
    printf("Second Matrix : \n");
    printmat(b);
    if (addmat(a, b, sum) == 0) {
        printf("Sum of First and Second Matrix : \n");
        printmat(sum);
    }

    return 0;
}
/*
3 3 4

1 1 2
1 2 4
2 1 5
3 3 1

3 3 2

1 2 1
2 2 1

*/