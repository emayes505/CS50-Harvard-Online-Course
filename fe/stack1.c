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

int isEmpty(stack s) {
    return s->top == NULL;
}

int main() {
    stack s;
    int a = isEmpty(s);
    printf("The num for isEmpty is %d.\n", a);
}
