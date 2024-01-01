#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
         float average = image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue;
         int averagePixel = round((average) / 3);

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
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
        float newRed = (image[i][j].rgbtRed * .393) + (image[i][j].rgbtGreen * .769) + (image[i][j].rgbtBlue * .189);
            if (newRed <= 255)
            {
               newRed = round(newRed);
            }
            else
            {
                newRed = 255;
            }
        float newGreen = (image[i][j].rgbtRed * .349) + (image[i][j].rgbtGreen * .686) + (image[i][j].rgbtBlue * .168);
            if (newRed <= 255)
            {
               newGreen = round(newGreen);
            }
            else
            {
                newGreen = 255;
            }
        float newBlue = (image[i][j].rgbtRed * .272) + (image[i][j].rgbtGreen * .534) + (image[i][j].rgbtBlue * .131);
            if (newBlue <= 255)
            {
               newBlue  = round(newBlue);
            }
            else
            {
                newBlue = 255;
            }
        }
    }
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
