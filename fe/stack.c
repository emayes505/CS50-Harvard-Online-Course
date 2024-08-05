#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    struct Node *top;;
}stack;

void init(stack* s){
    stack->top->data = 0;
}
void push (stack *s, int data) {
    struct Node newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}
Node *pop (stack* s) {
    struct Node *temp = stack->top;
    stack->top = stack->next;
    return temp;
}
int main() {
    struct stack = malloc(sizeof(struct stack));
}

