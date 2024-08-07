#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

typedef struct stack {
    Node *top; // head pointer to stack
}stack;

Node *createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int isEmpty(stack *s) {
    return s->top == NULL;
}

void push(stack *s, int data) {
    Node *newNode = createNode(data);
    if (newNode == NULL) {
        printf("Memory allocation error.\n");
        return;
    }
    newNode->data = data;
    newNode->next = s->top;
    s->top = newNode;
}

int main() {
    stack s;
    printf("The num for isEmpty is %d.\n", isEmpty(s));
    push(&s, 10);
    push(&s, 20);
    printf("The num for isEmpty is %d.\n", isEmpty(s));
    printf("%d\n", s.top->data);
}
