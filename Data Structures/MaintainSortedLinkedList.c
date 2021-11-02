#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;         //data
    struct node *next; //next address
};

void insert(struct node **s, int x) {
    // struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    // p->value = x;
    // p->next = NULL;
    // if (*s == NULL)
    //     *s = p;
    // else {
    //     p->next = *s;
    //     *s = p;
    // }
    // return;
}

void del(struct node **s, int x) {
    // if (*s == NULL) return;
    struct node *p, *q;
    p = NULL;
    q = *s;
    while (q != NULL && q->value < x) {
        p = q;
        q = q->next;
    }
    if (q == NULL || q->value > x) return;
    if (p != NULL)
        p->next = q->next;
    else
        p = q->next;

    free(q);
    return;
}

int search(struct node *start, int x) {
    struct node *p;
    p = start;
    while (p != NULL && p->value < x) {
        p = p->next;
    }
    if (p != NULL && p->value == x) return 1;
    return 0;
}

void display(struct node *start) {
    struct node *p;
    p = start;
    while (p != NULL) {
        printf("%d", p->value);
        p = p->next;
    }
    printf("\n");
    return;
}

int main() {
    struct node *start;
    int x, choice;
    start = NULL;
    while (1) {
        printf("1. Insert x\n");
        printf("2. Delete x from list\n");
        printf("3. Display the list\n");
        printf("4. Search x in list\n");
        printf("5. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter x :");
            scanf("%d", &x);
            insert(&start, x);
            break;
        case 2:
            printf("Enter x :");
            scanf("%d", &x);
            del(&start, x);
            break;
        case 3:
            display(start);
            break;
        case 4:
            printf("Enter x :");
            scanf("%d", &x);
            if (search(start, x)) printf("Found %d!!", x);
            else
                printf("Couudn't find %d", x);
            break;
        }
        if (choice == 5) break;
    }
    return 0;
}