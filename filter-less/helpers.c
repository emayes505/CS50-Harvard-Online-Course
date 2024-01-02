#include "helpers.h"
#include <math.h>
#include <stdio.h>

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
        int sepiaRed = 0;
        int sepiaGreen = 0;
        int sepiaBlue = 0;

        int newRed = round((image[i][j].rgbtRed * .393) + (image[i][j].rgbtGreen * .769) + (image[i][j].rgbtBlue * .189));
            if (newRed > 255)
            {
                sepiaRed = 255;
            }
            else
            {
                sepiaRed = newRed;
            }

        int newGreen = round((image[i][j].rgbtRed * .349) + (image[i][j].rgbtGreen * .686) + (image[i][j].rgbtBlue * .168));
            if (newGreen > 255)
            {
                sepiaGreen = 255;
            }
            else
            {
                sepiaGreen = newGreen;
            }

        int newBlue = round((image[i][j].rgbtRed * .272) + (image[i][j].rgbtGreen * .534) + (image[i][j].rgbtBlue * .131));
            if (newBlue > 255)
            {
                sepiaBlue = 255;
            }
            else
            {
                sepiaBlue = newBlue;
            }
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int tempRed[width];
    int tempGreen[width];
    int tempBlue[width];
    for (int i = 0; i < height; i++)
    {
        for(int j = 0;  j < width; j++)
        {
            tempRed[width - j - 1] = image[i][j].rgbtRed;
            tempBlue[width - j - 1] = image[i][j].rgbtBlue;
            tempGreen[width - j - 1] = image[i][j].rgbtGreen;
        }
        for (int k = 0; k < width; k++)
       {
        image[i][k].rgbtRed = tempRed[k];
        image[i][k].rgbtBlue = tempBlue[k];
        image[i][k].rgbtGreen = tempGreen[k];
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copyGrid[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copyGrid[i][j] = image[i][j];
        }

     }
     for (int row = 0; row < height; row++)
     {
        for (int col = 0; col < width; col++)
        {
            int allRed = 0;
            int allGreen = 0;
            int allBlue = 0;
            float squareCount = 0.00;

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                   if ()
                   allRed += copyGrid[row + x][col + y].rgbtRed;
                   allGreen += copyGrid[row + x][col + y].rgbtGreen;
                   allBlue += copyGrid[row + x][col + y].rgbtBlue;
                   squareCount++
                }
            }
        }
     }




}




