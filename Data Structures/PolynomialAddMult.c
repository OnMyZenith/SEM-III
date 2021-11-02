#include <stdio.h>
#include <stdlib.h>

struct poly {
    float cof;
    int exp;
};

void input(struct poly poly[], int *size) {
    printf("\nInput polynomial::");
    printf("\nInput size of polynomial:");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("\nDegree of element:%d:", i + 1);
        scanf("%d", &poly[i].exp);
        printf("Coeffcient of element:%d:", i + 1);
        scanf("%f", &poly[i].cof);
    }
}

void output(struct poly poly1[], int size) {
    for (int i = 0; i < size; i++) {
        if (poly1[i].cof == 0) i++;
        else
            printf("(%.2f)", poly1[i].cof);
        if (poly1[i].exp == 0) continue;
        else if (size - i != 1)
            printf("x^%d+", poly1[i].exp);
        else
            printf("x^%d", poly1[i].exp);
    }
}

void add(struct poly poly1[], struct poly poly2[], struct poly result[], int size1, int size2, int *size3) {
    int i = 0, j = 0, k = 0;
    *size3 = 0;
    while (i < size1 || j < size2) {
        if (poly1[i].exp == poly2[j].exp) {
            result[k].cof = poly1[i].cof + poly2[j].cof;
            result[k].exp = poly1[i].exp;
            (*size3)++;
            i++;
            j++;
            k++;
        } else if (poly1[i].exp > poly2[j].exp) {
            result[k].cof = poly1[i].cof;
            result[k].exp = poly1[i].exp;
            (*size3)++;
            i++;
            k++;
        } else {
            result[k].cof = poly2[j].cof;
            result[k].exp = poly2[j].exp;
            (*size3)++;
            j++;
            k++;
        }
    }
}
void multiply(struct poly poly1[], struct poly poly2[], struct poly result[], int size1, int size2, int *size3) {

    struct poly poly3[10], poly4[100];
    int m = 0;
    for (int i = 0; i < 100; i++) {
        result[i].cof = 0;
        result[i].exp = 0;
        poly4[i].cof = 0;
        poly4[i].exp = 0;
    }

    for (int i = 0; i < size1; i++) {
        int k = -1, l = 0;
        for (l = 0; l < m; l++) {
            poly4[l].cof = result[l].cof;
            poly4[l].exp = result[l].exp;
        }
        for (int j = 0; j < size2; j++) {
            poly3[++k].exp = poly1[i].exp + poly2[j].exp;
            poly3[k].cof = poly1[i].cof * poly2[j].cof;
        }
        add(poly3, poly4, result, k + 1, l, &m);
    }
    *size3 = m;
}
int main() {

    struct poly poly1[10], poly2[10], result[100];
    int size1, size2, size3;
    input(poly1, &size1);
    input(poly2, &size2);
    add(poly1, poly2, result, size1, size2, &size3);
    printf("\nAddition of 2 Polynomials:");
    output(result, size3);
    multiply(poly1, poly2, result, size1, size2, &size3);
    printf("\nMultiplication of 2 Polynomial:");
    output(result, size3);
    return 0;
}