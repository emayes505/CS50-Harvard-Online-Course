#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string changeText(string plainText, string key);

int main(int argc, string argv[])



{
        string key = argv[1];
        int len2;
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
        for (int k = 0; k < len; k++)
        {
        if (!isalpha(key[k]))
        {
                printf("Key contains invalid characters. Try again.");
                return 1;
        }
        }
                }
        return 0;
        }
        {
        string plainText = get_string("Plain Text: \n");
        len2 = strlen(plainText);
                //printf("Cipher Text: %s", changeText);

        }
        string changeText(string plainText, string key);
        {
                int len2 = strlen(plainText);

                for (int i = 0; i < len2, i++)
                {
                        if (isalpha(plainText[i]))
                        {
                           if (isupper(plainText[i]))
                           {
                                plainText[i] = plainText[i] - 65;
                           }
                           else
                           {
                                plainText[i] = plainText[i] - 97;
                           }
                           {
                                string plainText = key[plainText];
                                return plainText;
                           }

                        }
                else
                        printf("All characters entered must be alphabetical. Try again\n");

                }
        }

}
