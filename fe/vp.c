#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    char c;
    struct Node* next;
}Node;

typedef struct {
    char key;
    char value;
}map;

int isEmpty(struct Node* head) {
    if(head == NULL) {
        return 1;
    } else {
        return 0;
    }
}

Node* push (struct Node* head, char s) {
    if(isEmpty(head) == 0) {
        struct Node* newNode = (Node*)malloc(sizeof(struct Node*));
        newNode->c = s;
        newNode->next = head;
        head = newNode;
    return head;
    }
    else {
        return NULL;
    }
}
char pop(struct Node* head) {
    Node* temp = head;
    head = head->next;
    return temp->c;

}
bool isOpen(char s, map m) {
    for (int i = 0; i < 3; i ++) {
        if(s == m->value) {
            return true;
        }
    }
    return false;
}
bool isValid(char* s) {
    Node *head = NULL;
    map match[] = {
        {')','('}, {']','[' }, {'}','{'}};
    int i = 0;
   while (s[i] != '\0') {
        if(isOpen(s[i], match)) {
            push(head, s[i]);
        }
        else if (s[i]) {

        }
   }
}
int main() {
    char *s = "(){}[]";

}
