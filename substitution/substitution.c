#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])

{
  string key = argv[1];
  string pText;
  int length = strlen(key);


        if (argv[1] == NULL || length != 26 || argc != 2)
        {
        printf("Invalid, no input. Please enter key.\n");
        return 1;
        }
                for (int i = 0; i < length; i++)
                {
                        for (int j = i + 1; j < length; j++ )

                        {
                        if (toupper(key[i]) == toupper(key[j]))
                       {
                        printf("Duplicates found. Try again.\n");
                        return 1;
                        }
                        else if (!isalpha(key[i]))
                              {
                              printf("Invalid input, all charcters must be alphabetical.\n");
                              return 1;
                              }
                        }
                  pText = get_string("plaintext: ");
                  }

                for (int i = 0; i < length; i++)
           {

                if(islower(key[i]))
                {
                        key[i] = key[i] - 32;
                }


           }
           string changeText(string pText)


}
