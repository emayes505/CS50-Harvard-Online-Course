#include <stdio.h>
/* iterate through a 5*5 grid using nested for loops to print out *'s
on the first and last rows and first and last columns. all cordinates
(0,x),(x,0),(4,x),(x,4) should produce *'s
 */
int main(void) {
int rows = 5, col = 5;

for (int i = 0; i < rows; i ++)
{
    for (int j = 0; j < col; j++)
    {
        if (i == 0 || i == rows - 1 || j == 0 || j == col - 1)
        {
            printf("* ");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    }
}
