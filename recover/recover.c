#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


 //open memory card > look for beginning of the JPEG > open a new JPEG file to write to, write data in 512byte chunks until new jpeg is found. then close and start new repeat. until end of file is reached.
// image is a jpeg. first byte is 0xff, 0xd8, 0xff, 0xe(?)/when noticing this patten we know this is beginning of jpeg. last byte is oxe0/0xe1/oxe2...oxef
int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./recover Filename\n.");
        return 1;
    }
    FILE *mcFile = fopen(argv[1], "r");
    int fileNum = 0;

    if (mcFile == NULL)
    {
        printf("error opening file.\n");
    }
    uint8_t buffer[512];
    while (fread(buffer, 1, 512, mcFile) != 0)
    {
        sprintf(mcFile, "%03i", fileNum)

    }
fileNum++;






}
//buffer to write data to.
//fread(data, size, number, inptr)
//(buffer[3] & 0xf0) == 0xe0 then compare to 0xe0
//when making a new jpeg file after finding the source of a new jpeg filename should be "###.jpg" starting at 000.jpeg
//sprintf(filename, "%03i.jpeg", 2); (002) make sure "filename" has enough memory/characters to fully represent the entire file name.
//open new file.  fopen(filename, "w");
//fwrite (data(pointer to all of the bytes you want to write), size, number, outptr (file pointer to write data to))
//end of file? fread returns # of items of size size that were read. number might be less than 512 so make condition to handle this.


//open memory card
//repeat until end of card(some process)
//  read 512 bytes into a buffer
//look at the 512 bytes/if start of jpeg header
//if first jpeg then start writing to filename 000.jpeg first file
//if you've alrdy found jpeg then youll need to close current file and open new
//if its not a new jpeg and you've alrdy found jpeg keep writing.
