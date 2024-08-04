#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *moveHeadNearTail(Node* head);
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
    return head;
}
void printList(struct Node *head) {
    while (head != NULL) {

        printf("%d", head->data);
    if (head->next!= NULL) {
        printf("->");
    }
    head = head->next;
}
}
Node *moveHeadNearTail(Node* head) {
     struct Node* cur = head;
     while (cur->next->next != NULL) {
        head = head->next;
        cur->next = head->next;
        head->next = cur;
     }
}

