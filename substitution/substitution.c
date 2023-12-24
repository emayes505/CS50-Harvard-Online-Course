#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
int length = 0;

string key = (argv[1]);

length = strlen(key);

if (argv[1] == NULL || length != 26)
        {
        bool isAlpha = false;
        printf("Invalid, no input. Please enter key.\n");
        return 1;

        for (int i = 0; i < length; i++)
        if (int isaplha(key[i]) == 0)
              {
                isAlpha = true;
              }
        }
}
