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


int main() {
    map key[] = {
        {'}', '{'},
        {')', '('},
        {']', '['}};

    char *s = "(){}[]";

}
