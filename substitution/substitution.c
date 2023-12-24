#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])

{
    int keySize = 0;
    do
    {
    string key = get_string("Enter Key Here: \n");

    keySize = strlen(key);
    if (keySize == 0)
        {
            printf("No key was entered. Please enter a 26 character key.\n");
            
        }
        return 1;

    else if (keySize != 26)
        {
            printf("Key must contain 26 characters exactly. Try again.\n");
            return 1;
         }

     } while (keySize != 26);



    }






