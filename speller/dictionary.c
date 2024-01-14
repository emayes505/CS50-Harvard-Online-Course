// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
// Open dictionary, read strings from file 1 at a time, create a new node for each word,
//hash word to obtain hash value, insert node into hash table at location
bool load(const char *dictionary)
{
    FILE *dict;
    node *newNode = NULL;
    dict = fopen(dictionary, "r");
    {
    if (dict == NULL)
        {
        printf("Opening dictionary was unsuccessful.");
        return false;
        }
    }
    while (fscanf(dict, "%s", newNode->word) != EOF)
    {
    newNode = malloc(sizeof(node));
    if(malloc == NULL)
    printf("Memory error.\n");
    }


}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
