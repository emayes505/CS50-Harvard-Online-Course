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


void init(stack *s) {
    s->top = NULL;
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
    Node *temp = s->top;
    while (temp != NULL) {
        printf("%d", temp->data);
        temp = temp->next;;
    }
    printf("\n");
}


int main() {
    stack s;
    init(&s);
    push(&s, 1);
    print(&s);
    push(&s, 2);
    print(&s);
    push(&s, 3);
    print(&s);
}
