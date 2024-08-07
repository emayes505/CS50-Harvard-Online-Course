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
int pop(stack *s) {
    if (isEmpty(s)) {
        printf("Empty stack\n");
        return -1;
    }
    int temp = s->top->data;
    s->top = s->top->next;
    printf("pop: %d\n", temp);
    return temp;
}

void print(stack *s) {
    while (s->top != NULL) {
        printf("%d\n", s->top->data);
        s->top = s->top->next;
    }
}
int main() {
    stack s;
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    print(&s);
}
