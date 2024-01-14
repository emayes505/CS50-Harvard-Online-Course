// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 25;

// Hash table
node *table[N];

int callCount = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    node *cursor;
    cursor = table[hash(word)];
    while (cursor->next != NULL)
    {
        if (strcasecmp(cursor->word, word)) {
            return true;
        }
        else {
        cursor = cursor->next;
        }
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{

      int index;
      index = toupper(word[0]) - 65 % N;
      callCount ++;

    return index;
}

// Loads dictionary into memory, returning true if successful, else false
// Open dictionary, read strings from file 1 at a time, create a new node for each word,
//hash word to obtain hash value, insert node into hash table at location
bool load(const char *dictionary)
{
    FILE *dict;
    node *newNode = NULL;
    char buffer[LENGTH + 1];
    dict = fopen(dictionary, "r");
    {
    if (dict == NULL) {
        printf("Opening dictionary was unsuccessful.");
        return false;
        }
    }
    while (fscanf(dict, "%s", (char *)buffer) != EOF) {
    newNode = malloc(sizeof(node));
    if(newNode == NULL) {
        printf("Memory error.\n");
        return false;
    }
    int idx = hash(buffer);
    node *head = NULL;
    strcpy(newNode->word, buffer);
    table[idx]->next = head;
    head = newNode;

    }
    return true;
}



// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{

    return callCount;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < 25; i++)
    {
        
    }
    return false;
}
