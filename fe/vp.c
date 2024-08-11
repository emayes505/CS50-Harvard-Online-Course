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

int isOpen(struct Node* head){
    char open[] = { '{', '(', '[' };
    char closed[] = { '}', ')', ']'};
    for (int i = 0; i < 3; i++) {
        
    }
}
int main() {
    char *s = "(){}[]";

}
