#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    char c;
    struct Node* next;
}node;


typedef struct map {
    char key;
    char value;
}map;


bool isEmpty(struct node* head) {
    return head == NULL;
}


node *push(struct Node* head, char s) {
    struct node *nn = (node*)malloc(sizeof(struct node*));
    nn->c = s;
    nn->next = head;
    head = nn;
    return head;
}


char pop(struct node* head) {
    if(!isEmpty) {
        node* temp = head;
        head = head->next;
        return temp->c;
    }
    else {
        return 'n';
    }
}


int main() {
    map key[] = {
        {'}', '{'},
        {')', '('},
        {']', '['}};

    char *s = "(){}[]";

}
