#include <stdio.h>

int main() {
    struct headnode h;
    h.start = NULL;
    h.end = NULL;
    h.count = 0;

    inserFirst(&h, x);
    inserLast(&h, x);
    return 0;
}