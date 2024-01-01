#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height - 1; i++)
    {
        for (int j = 0; j < width - 1; j++)
        {
         int averagePixel = round(RGBTRIPLE.rgbtBlue + RGBTRIPLE.rgbtGreen + RGBTRIPLE.rgbtRed) / 3.0);
         RGBTRIPLE.rgbtBlue  = averagePixel;
         RGBTRIPLE.rgbtGreen = averagePixel;
         RGBTRIPLE.rgbtRed = averagePixel;
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
