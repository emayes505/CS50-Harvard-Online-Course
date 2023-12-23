// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
 
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int length = strlen(password);
    bool hasPunc = false;
    bool hasDigit = false;
    bool hasUpper = false;
    bool hasLower = false;


        for (int i = 0; i < length; i++)
        {
            if (ispunct(password[i]))
                {
                    hasPunc = true;
                }
            else if (isdigit(password[i]))
                {
                    hasDigit = true;
                }
            else if (isupper(password[i]))
                {
                    hasUpper = true;
                }
            else if (islower(password[i]))
                {
                    hasLower = true;
                }
             return hasPunc && hasDigit && hasUpper && hasLower;
        }
    return false;
}
