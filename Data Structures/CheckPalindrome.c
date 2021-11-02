#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

struct stack {
    char *a;
    int size;
    int top;
};

int isempty(struct stack *st) { return st->top == -1; }

void push(struct stack *st, char c) {
    st->top++;
    st->a[st->top] = c;
}

char pop(struct stack *st) {
    char c = st->a[st->top];
    st->top--;
    return c;
}

int palindrome(char str[]) {
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->a = (char *)malloc(MAX_SIZE * (sizeof(char)));
    st->size = MAX_SIZE;
    st->top = -1;
    for (int i = 0; str[i] != '\0'; i++)
        push(st, str[i]);
    int i = 0;
    while (!isempty(st)) {
        char c = pop(st);
        if (c == str[i]) i++;
        else
            return 0;
    }
    return 1;
}

int main() {
    char str[MAX_SIZE];
    printf("\nEnter any string:");
    scanf("%s", str);
    if (palindrome(str)) printf("%s is a Palindrome\n", str);
    else
        printf("%s is not a Palindrome\n", str);
}