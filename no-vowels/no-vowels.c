// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace (string input_string);

int main(int argc, string argv[])
{
    if (argc != 2)
        {
            printf("Use ./no-vowels 'word'. Try again.\n");
            return 1;
        }

        printf("%s\n", replace(argv[1]));

}
    string replace (string input_string)
{


    for (int i = 0; i != '\0'; i++)
    {
        //input string[i]
        switch(toupper(input_string[i]))
           {
            case ('A'):
                input_string[i] = 54;
                break;
            case 'E':
                input_string[i] = 51;
                break;
            case 'I':
                input_string[i] = 49;
                break;
             case 'O':
                input_string[i] = 48;
                break;
           }
    }
    return input_string;
}
