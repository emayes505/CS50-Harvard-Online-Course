#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])

int length = 0;

{
    string key = get_string("%s", argv[1]);
    length = strlen(key);
    do
    {
    if (length == 0)
        printf("Invalid, no input. Please enter key.\n");

    else (length != 26)
        printf("Invalid, Key must contain 26 characters. Try again.\n");
        
    } (while length != 26)

}



