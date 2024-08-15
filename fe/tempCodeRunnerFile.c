#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *l;
    struct node* r;
}node;

node *createNode(int data) {
    node *newNode = (node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->l = NULL;
    newNode->r = NULL;
    return newNode;
}

int sumSingleParents(node *root) {
    if(root == NULL) {
        return 0;
    }

    int sum = 0;

    // Check if the node has exactly one child
    if((root->l == NULL && root->r != NULL)||(root->l != NULL && root->r == NULL)) {
        sum += root->data;
    }

    // Recursively add the sum from left and right subtrees
    sum += sumSingleParents(root->l);
    sum += sumSingleParents(root->r);

    return sum;
}

int main() {
    struct node *root;
    root = createNode(13);
    root->l = createNode(4);
    root->r = createNode(25);
    root->l->l = createNode(3);
    root->r->r = createNode(30);
    root->r->l = createNode(20);
    root->l->r = createNode(8);
    root->r->l->r = createNode(22);
    root->l->r->l = createNode(5);
    root->l->l->l = createNode(2);
    int total = sumSingleParents(root);
}
