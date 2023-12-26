#include <cs50.h>
#include <stdio.h>

int main(void)
{
    draw(1);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
        draw (n+1);
    }
    printf("\n");
}
