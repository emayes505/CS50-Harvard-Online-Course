#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    char c;
    struct node* next;
}node;


typedef struct map {
    char key;
    char value;
}map;


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
    if(!isEmpty) {
        node* temp = head;
        head = head->next;
        return temp->c;
    }
    else {
        return 'n';
    }
}

int openOrClosed(char s) {
    char open[] = "({[";
    char closed[] = ")}]";
    for (int i = 0; i < 3; i++) {
        if(s == open[i]) {
            return 1;
        }
        else if(s == closed[i]) {
            return 0;
        }
    }
}
bool isValid(char *s) {
        map key[] = {
        {'}', '{'},
        {')', '('},
        {']', '['}};
    int size = 0;
    while (s[size] != '\0') {
        size++;
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < 3; j++) {
        if(s[size] == key[j].value)
        }
    }

}



int main() {
    char *s = "(){}[]";

}
