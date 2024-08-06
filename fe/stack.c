#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    struct Node *top;
}stack;

void init(stack* s){
    s->data = 0;
    s->top = NULL;
}
void push (stack *s, int data) {
    Node *newNode = (Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = s->top;
    s->top = newNode;
}
Node *pop (stack* s) {
    Node *temp = s->top;
    s->top = s->next;
    return temp;
}
int main() {
    struct stack s = malloc(sizeof(struct stack));
}

