//Write a recursive C function/algorithm mirrorTree( ) that changes a given input tree so that it becomes the mirror image of the original tree.

#include <stdio.h>
#include <stdlib.h>

void mirrorTree(struct TreeNode *root)
{
    if(root == NULL)
        return;
    mirrorTree(root->left);
    mirrorTree(root->right);
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
}
