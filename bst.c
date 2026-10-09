//---Binary search tree----

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *insert(struct node *root, int x) {
    if (root == NULL) {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));

        newnode->data = x;
        newnode->left = NULL;
        newnode->right = NULL;

        return newnode;
    }

    if (x < root->data) {
        root->left = insert(root->left, x);
    }
    else if (x > root->data) {
        root->right = insert(root->right, x);
    }

    return root;
}
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root = NULL;
    int n, x, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        root = insert(root, x);
    }

    printf("BST created successfully");
    
    printf("\nBST created successfully");

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);


    return 0;
}
