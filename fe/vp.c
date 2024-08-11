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
    }
    else {
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
bool isValid(char* s) {
    map match[] = {
        {')','('}, {']','[' }, {'}','{'}};
    int i = 0;
   while (s[i] != '\0') {
        if()
   }
}
int main() {
    char *s = "(){}[]";
    
}
