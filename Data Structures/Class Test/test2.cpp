void decrease(int a[], int n, int i, int d) {
    a[i] -= d;
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (a[i] < a[parent]) {
            int temp = a[i];
            a[i] = a[parent];
            a[parent] = temp;
            i = parent;
        } else {
            break;
        }
    }
}

int nonLeafNodes(struct node *newnode) {
    int cnt = 0;
    if (newnode != NULL) {
        nonLeafNodes(newnode->left);
        if ((newnode->left != NULL) || (newnode->right != NULL)) {
            cnt++;
        }
        nonLeafNodes(newnode->right);
    }
    return cnt;
}