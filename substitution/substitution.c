#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])


{
        string key = argv[1];
        int len = strlen(key);
        // input parameters are only 2 inputs/and a single key value of 26 characters.

        if (argc != 2 || len != 26)
        {
                printf("Input is invalid. Enter key after program command ./substitution KEYHERE(26 Characters).\n");
                return 1;
        }// iterate through key to determine is duplicates are present.
        for (int i = 0; i < len; i++)
        {
                for(int j = i + 1; j < len ; j++)
                {
                        if (toupper(key[i]) == toupper(key [j]))
                        {
                                printf("Duplicates found in key. Try again.\n");
                                return 1;
                         }

        else if (!isalpha(key[i]))
        {
                printf("Key contains invalid characters. Try again.");
                return 1;
        }
        }
        return 0;
        }
}
