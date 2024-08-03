#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
}Node;


void printList(struct Node *head);
Node *linkedList(int arr[], int size);

int main() {
    int arr[] = {1, 7, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    struct Node *head = linkedList(arr, size);
    printList(head);
}


Node *linkedList(int arr[], int size) {
    struct Node *head = NULL;
    struct Node *tail;
    for (int i = 0; i < size; i++) {
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    }
}
void printList(struct Node *head) {
    while (head->next != NULL) {

        printf("%d", head->data);
    if (head->next->next != NULL) {
        printf("->");
    }
    head = head->next;
}
}

