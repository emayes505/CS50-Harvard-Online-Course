#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height - 1; i++)
    {
        for (int j = 0; j < width - 1; j++)
        {
         int averagePixel = round(image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue / 3.0);
         image[i][j].rgbtRed   = averagePixel;
         image[i][j].rgbtGreen = averagePixel;
         image[i][j].rgbtBlue  = averagePixel;

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
