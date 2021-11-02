// ANKIT KUMAR 2K20/CO/72
#include <iostream>
#define SIZE 5
using namespace std;

class Array_Sum {
    int a[SIZE];
    long SUM;

public:
    Array_Sum() {
        SUM = 0;
    }
    void input() {
        for (int i = 0; i < SIZE; i++) {
            scanf("%d", &a[i]);
            SUM += a[i];
        }
    }
    void sum() {
        printf("Sum of Elements of given Array is : %ld\n", SUM);
    }
};
int main() {
    Array_Sum S;
    printf("Enter Array ( SIZE = %d ) : \n", SIZE);
    S.input();
    S.sum();
    return 0;
}