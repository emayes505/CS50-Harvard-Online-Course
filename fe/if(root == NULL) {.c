if(root == NULL) {
    return;
}
if(root->left == NULL && root->right == NULL) {
    root->height = 0;
    return;
}
assignHeight(root->left);
assignHeight(root->right);

int leftHeight = (root->left != NULL) ? root->left->height : -1;
int rightHeight = (root->right != NULL) ? root->right->height : -1;

root->height = 1 + max(leftHeight, rightHeight);


void insert(int *heap, int curSize, int newVal) {

};

void insert(int * heap, int curSize, int newVal)  {
    int idx = curSize + 1;
    heap[idx] = newVal;

    while(heap[idx] < heap[idx / 2] &&  idx > 1) {
        int temp = heap[idx/2];
        heap[idx/2] = heap[idx];
        heap[idx] = temp;
        idx = idx/2;
    }
}
