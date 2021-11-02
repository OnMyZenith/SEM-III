#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;         //data
    struct node *next; //next address
};

void insert(struct node **s, int x) {
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->value = x;
    p->next = NULL;
    if (*s == NULL)
        *s = p;
    else {
        p->next = *s;
        *s = p;
    }
    return;
}

void append(struct node **s, int x) {
    struct node *p, *q;
    p = (struct node *)malloc(sizeof(struct node));
    p->value = x;
    p->next = NULL;
    if (*s == NULL)
        *s = p;
    else {
        q = *s;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
    }
    return;
}

void insertAfter(struct node **s, int x, int y) {
    struct node *p, *q;
    p = (struct node *)malloc(sizeof(struct node));
    p->value = y;
    p->next = NULL;
    if (*s == NULL)
        *s = p;
    else {
        q = *s;
        while (q->next != NULL && q->value != x)
            q = q->next;
        p->next = q->next;
        q->next = p;
    }
    return;
}

void del(struct node **s, int x) {
    if (*s == NULL) return;
    struct node *p, *q;
    p = NULL;
    q = *s;
    while (q != NULL && q->value != x) {
        p = q;
        q = q->next;
    }
    if (q == NULL) return;
    p->next = q->next;
    free(q);
    return;
}

int search(struct node *start, int x) {
    struct node *p;
    p = start;
    while (p != NULL) {
        if (p->value == x) return 1;
        p = p->next;
    }
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
    int x, y, choice;
    start = NULL;
    while (1) {
        printf("1. Insert x at Beginning\n");
        printf("2. Append x at End\n");
        printf("3. Insert y after x\n");
        printf("4. Delete x from list\n");
        printf("5. Display the list\n");
        printf("6. Search x in list\n");
        printf("7. Exit\n");
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
            append(&start, x);
            break;
        case 3:
            printf("Enter x and y :");
            scanf("%d %d", &x, &y);
            insertAfter(&start, x, y);
            break;
        case 4:
            printf("Enter x :");
            scanf("%d", &x);
            del(&start, x);
            break;
        case 5:
            display(start);
            break;
        case 6:
            printf("Enter x :");
            scanf("%d", &x);
            if (search(start, x)) printf("Found %d!!", x);
            else
                printf("Couudn't find %d", x);
            break;
        }
        if (choice == 7) break;
    }
    return 0;
}