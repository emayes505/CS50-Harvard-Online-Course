#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(int argc, string argv)

{
string key = argv[1];
if (argc != 2)
    {
        printf("Usage: ./solution key\n");
        return 1;
    }
if (key != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int i = 0; i < 26; i++)
        {
            for (int j = i + 1; j < 26; j++)
            if (toupper(key[i]) == toupper(key[i]))
        }



}
