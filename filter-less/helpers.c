#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
         float average = round(image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue/3);
         int averagePixel = round(average/3);

         image[i][j].rgbtRed   = averagePixel;
         image[i][j].rgbtGreen = averagePixel;
         image[i][j].rgbtBlue  = averagePixel;
        }
    }
    return;
}
// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}