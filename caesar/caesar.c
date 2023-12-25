#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc != 2)
    {
        printf("Invalid input. Usage: ./caesar 'key'.\n");
        return 1;
    }
    int key = argv[1];
    key = key%26
if (!isdigit(key) || key < 0)
    {
    printf("Usage: ./caesar key.\n");
    return 1;
    }
string plainText = get_string("plaintext: ");

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
