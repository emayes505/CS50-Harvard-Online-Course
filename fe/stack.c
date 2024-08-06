#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
}stack;

void init(stack* s){
    s->top = NULL;
}
void push (stack *s, int data) {
    Node *newNode = (Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failure.\n");
        return;
    }
    newNode->data = data;
    newNode->next = s->top;
    s->top = newNode;
}
Node *pop (stack* s) {
    if (s->top == NULL) {
        p
    }
    Node *temp = s->top;
    s->top->next = s->top->next;
    return temp;
}
int main() {
    stack s = malloc(sizeof(struct stack));
}

