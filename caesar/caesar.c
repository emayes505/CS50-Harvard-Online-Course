#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
if (argc != 2)
    {
        printf("Invalid input. Usage: ./caesar 'key'.\n");
        return 1;
    }

for (int i = 0, keyLength = strlen(argv[1]); i < keyLength; i++)
    {
        if(!isdigit(argv[1] [i]))
        {
            prinft("Key must only contain digits.\n")
            return 1;
        }
    }
string plainText = get_string("plaintext: ");
int key = atoi(key)%26;


        printf("ciphertext: ");

for (int i = 0, length = strlen(plainText); i < length; i++)
    {
        if (isupper(plainText[i]))
        {
         int index = plainText[i] - 65;
         printf("%c", toupper(index + key));
        }
        else if (islower(plainText[i]))
        {
            int index = plainText[i] - 97;
            printf("%c", tolower(index + key));
        }
        else
            {
                printf("%c", plainText[i]);
            }
    }
    printf("\n");
    return 0;

}
