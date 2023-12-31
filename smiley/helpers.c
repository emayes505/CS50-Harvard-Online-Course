#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if (image[i][j].rgbtRed == 0xFF && image[i][j].rgbtBlue == 0xFF && image[i][j].rgbtGreen == 0xFF)
            {
                image[i][j].rgbtRed   = 0xB6;
                image[i][j].rgbtBlue  = 0xF7;
                image[i][j].rgbtGreen = 0x11;
            }

        }
    }
    return;
    // Change all black pixels to a color of your choosing
}
