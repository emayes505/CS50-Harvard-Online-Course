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
    // make copy of grid
    RGBTRIPLE copyGrid[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copyGrid[i][j] = image[i][j];
        }

     }
     // iterate throught the image
     for (int row = 0; row < height; row++)
     {
        for (int col = 0; col < width; col++)
        {
            // create variable that will be used to calculate all the pixels surrounding main pixel and this will also reset to 0 everytime the pixel changes positiion.
            int allRed = 0;
            int allGreen = 0;
            int allBlue = 0;
            float squareCount = 0.00;

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    // we iterate though the 9 pixels surrounding the main pixel
                   int currentX = row + x;
                   int currentY = col + y;
                    // all conditions here check to see if pixel would be out of bounds. we continue if it is else we increment the pixel count as well as increment the allRGB count.
                   if (currentX < 0 || currentY < 0 || currentX > height - 1 || currentY > width - 1)
                   {
                    continue;
                   }
                   else
                   {
                    allRed += image[currentX][currentY].rgbtRed;
                    allGreen += image[currentX][currentY].rgbtGreen;
                    allBlue += image[currentX][currentY].rgbtBlue;

                    squareCount++;
                    }
                } // copy the average value of all pixels surround the target one into the copy of the image.
             copyGrid[row][col].rgbtRed = round(allRed / squareCount);
             copyGrid[row][col].rgbtGreen = round(allGreen / squareCount);
             copyGrid[row][col].rgbtBlue = round(allBlue / squareCount);
            }

        }
     }
     // finally iterate throught the entire main image again to take the copied image and place the values back into the main image.
     for (int i = 0; i < height; i++)
     {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = copyGrid[i][j].rgbtRed;
            image[i][j].rgbtGreen = copyGrid[i][j].rgbtGreen;
            image[i][j].rgbtBlue = copyGrid[i][j].rgbtBlue;
        }
     }
     return;

}
