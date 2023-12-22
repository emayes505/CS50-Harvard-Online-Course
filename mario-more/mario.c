#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int row;
    int column;

    do
    {
    height = get_int("Height? ");
    if (height < 1 || height > 8)
        printf("Height must be between 1 and 8. Please try again.\n");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for(column = 0; column <= row; column++)
        printf("\n");
    }

}
