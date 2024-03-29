#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

void newFile(int fileNum, char *fileName);

bool isBufferJpeg(uint8_t *buffer);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover Filename\n.");
        return 1;
    }
    FILE *mcFile = fopen(argv[1], "r");

    if (mcFile == NULL){
        printf("error opening file.\n");
    }

    uint8_t buffer[512];
    int fileNum = 0;
    bool isOpen = false;
    FILE *img = NULL;

    while (fread(buffer, 1, 512, mcFile) != 0)
    {
    char fileName[9];

    if (isBufferJpeg(buffer) == true && isOpen == true){
        fclose(img);
        img = fopen(newFile(fileNum, fileName), "w");
        fwrite(buffer, 512, 1, img);

    }
    else if (isBufferJpeg(buffer) == true && isOpen == false){

           img = fopen(newFile(fileNum, fileName), "w");
           fwrite(buffer, 512, 1, img);
           isOpen = true;
    }
    else if (isOpen == false){
            continue;
    }
    else{
            fwrite(buffer, 512, 1, img);

    }

    }
    fclose(mcFile);
    fclose (img);
    isOpen = false;
    return 0;
}
void newFile(int fileNum, char *fileName)
{

    sprintf(fileName, "%03i.jpg", fileNum);
    fileNum++;
    return;

}

bool isBufferJpeg(uint8_t *buffer)
{
    if (buffer[0] == 0xFF && buffer[1] == 0xD8 && buffer[2] == 0xFF && (buffer[3] & 0xF0) == 0xE0)
    {
        return true;
    }
    return false;

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
