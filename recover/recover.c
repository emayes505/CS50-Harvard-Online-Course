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
