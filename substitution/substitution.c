#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
int length = 0;
bool keyIsAlpha = false;

string key = get_string("%s", argv[1]);

length += strlen(key);

if (argv[1] == NULL || length != 26)
        {
        printf("Invalid, no input. Please enter key.\n");
        return 1;
        }
}
