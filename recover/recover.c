#include <stdio.h>
#include <stdlib.h>
 //open memory card > look for beginning of the JPEG > open a new JPEG file to write to, write data in 512byte chunks until new jpeg is found. then close and start new repeat. until end of file is reached.
// image is a jpeg. first byte is 0xff, 0xd8, 0xff, 0xe(?)/when noticing this patten we know this is beginning of jpeg. last byte is oxe0/0xe1/oxe2...oxef
int main(int argc, char *argv[])
{
    FILE *f = fopen(card.raw, "r")

}
//buffer to write data to.
//fread(data, size, number, inptr)
//(buffer[3] & 0xf0) == 0xe0 then compare to 0xe0
//when making a new jpeg file after finding the source of a new jpeg filename should be "###.jpg" starting at 000.jpeg
//sprintf(filename, "%03i.jpeg", 2); (002) make sure "filename" has enough memory/characters to fully represent the entire file name.
//open new file.  fopen(filename, "w");
//fwrite (data(pointer to all of the bytes you want to write), size, number, outptr (file pointer to write data to))
