// A form of Binary Tree
#include <stdio.h>
#include <stdlib.h>

struct treenode {
    int key;
    struct treenode *left, *right;
};

void insert(struct treenode **r, int x) {
    struct treenode *q, *p;
    q = (struct treenode *)malloc(sizeof(struct treenode));
    q->key = x;
    q->left = NULL;
    q->right = NULL;

    if (*r == NULL) *r = q;
    else {
        p = *r;
        while (1) {
            if (p->left != NULL && x < p->key) p = p->left;
            else if (p->right != NULL && x > p->key)
                p = p->right;
            else
                break;
        }
        if (x < p->key) p->left = q;
        else
            p->right = q;
    }
}

int main() {
    struct treenode *root;
    root = NULL; //creating empty BST

    int x;
    insert(&root, x);
    return 0;
}