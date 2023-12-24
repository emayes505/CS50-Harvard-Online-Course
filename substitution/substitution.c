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
        bool isAlpha;
        printf("Invalid, no input. Please enter key.\n");
        return 1;

        for (int i = 0; i < length; i++)
            {
            if isalpha(key[i])
            return !1;
            isAlpha = false;
            return 1;
            }
         else
         {
         isAlpha = true;
         return 0;
        }
}
