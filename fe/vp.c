#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
    char c;
    struct node* next;
}node;

typedef struct stack {
    node *top;
}stack;

typedef struct map {
    char key;
    char value;
}map;

void initStack(struct stack s) {
    s.top == NULL;
}
bool isEmpty(struct node* head) {
    return head == NULL;
}


node *push(struct node* head, char s) {
    struct node *nn = (node*)malloc(sizeof(struct node*));
    nn->c = s;
    nn->next = head;
    head = nn;
    return head;
}


char pop(struct node* head) {

        node* temp = head;
        head = head->next;
        printf("%c has been popped.\n", temp->c);
        return temp->c;
}

bool isValid(char *s) {
        stack v;
        initStack(v);
        map map[] = {
        {'}', '{'},
        {')', '('},
        {']', '['}};
    int size = 0;
    for (int i = 0; i < 3; i++) {
        if(s[i] == map[i].key && isEmpty(v.top)) {
            return false;
        }
        else if(v.top->c != map[i].value)

     else {
           v.top = push(v.top, s[i]);
        }
    }
    if(v.top == NULL) {
        return true;
    }
    return false;
}


int main() {
    char *s = "(){}";
    (isValid(s)) ? printf("Valid\n") : printf("Not valid.\n");
}
