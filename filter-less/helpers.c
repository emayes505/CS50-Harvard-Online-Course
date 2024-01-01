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


         image[i][j].rgbtRed   = average;
         image[i][j].rgbtGreen = average;
         image[i][j].rgbtBlue  = average;
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
        float newRed = image[i][j].rgbtRed * .393 + image[i][j].rgbtGreen * .769 + image[i][j].rgbtBlue * .189;
            if (newRed !> 255)
            {
                round(newRed);
            }
            else
            {
                newRed == 255;
            }
        float newGreen = image[i][j].rgbtRed * .349 + image[i][j].rgbtGreen * .686 + image[i][j].rgbtBlue * .168;
            if (newRed !> 255)
            {
                round(newGreen);
            }
            else
            {
                newGreen == 255;
            }
        float newBlue = image[i][j].rgbtRed * ..272 + image[i][j].rgbtGreen * ..534 + image[i][j].rgbtBlue * .131;
            if (newBlue !> 255)
            {
                round(newBlue);
            }
            else
            {
                newBlue == 255;
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
