// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace (string input_string);

int main(int argc, string argv[])
{
    if (argc != 2)
        {
            printf("Use ./no-vowels 'word'. Try again.");
            return 1;
        }

}
string replace (string input_string)
{
    int length = strlen(input_string);
    for (int i = 0; i < length; i++)
    {
        //input string[i]
        switch(input_string[i])
           {
            case 'a':
                input_string[i] = 54;
                break;
            case 'e':
                input_string[i] = 51;
                break;
            case 'i':
                input_string[i] = 49;
                break;
             case 'o':
                input_string[i] = 48;
                break;
           }
    }
}
