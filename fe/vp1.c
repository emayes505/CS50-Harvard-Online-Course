#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct Node{
    char c;
    struct Node *next;
}Node;

typedef struct stack {
    Node *top;
}stack;

typedef struct map {
    char key;
    char value;
}map;

void init(struct stack *s) {
    s->top == NULL;
}

void push(struct stack *s, char t) {
    Node *nn = (Node*)malloc(sizeof(struct Node));
    nn->c = t;
    nn->next = s->top;
    s->top = nn;
    printf("pushed \"%c\"\n", nn->c);
}
int pop(struct stack *s) {
    Node *temp = s->top;
    s->top = s->top->next;
    printf("popped \"%c\"\n", temp->c);
    return temp->c;
}

bool isEmpty(struct stack *s) {
    return s->top == NULL;
}


bool isValid(char* s) {
    stack q;
    init(&q);
    map m[] = {
        {']','['},
        {')','('},
        {'}','{'}};
    int j = 0;
    while (s[j] != '\0'){
        for (int i = 0; i < 3; i++) {
            if(s[j] == m[i].key) {
                if(isEmpty(&q) || pop(&q) != m[i].value) {
                    return false;
                }
            } else if (s[j] == m[i].value) {
                if(!isEmpty(&q)) {
                    push(&q, s[j]);
                }
            }
        }
        j++;
    }
    if(isEmpty(&q)) {
        return true;
    }
    return false;
}
int main(void) {
    char *s = "(){}[]";
    if (isValid(s)) {
        printf("The string is valid\n");
    }
    else {
        printf("The string is NOT Valid\n");
    }
}
