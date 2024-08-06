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
int isEmpty(stack *s){
    if (s->top == NULL){
        return 1;
    }
    return 0;
}
Node *pop (stack* s) {
    if (s->top == NULL) {
        printf("Empty list.\n");
        return NULL;
    }
    Node *temp = s->top;
    s->top = s->top->next;
    return temp;
}
void printStack(stack *s) {
    while(s->top != NULL) {
        printf("%d", s->top->data);
    if (s->top->next != NULL){
        printf(" -> ");
    }
    s->top = s->top->next;
    }
    printf("\n");
}
int main() {
    stack s;
    init(&s);
    char[] score = {2,5,+,3,+,+.1};
}

