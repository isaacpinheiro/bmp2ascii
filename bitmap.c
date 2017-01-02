#include <stdio.h>
#include "bitmap.h"

void generate_image(Color32 **color, unsigned int width, unsigned int height)
{

    char *pixel = " .:ioVM@";
    int i, j;

    for (i=0; i<height; i++) {

        for (j=0; j<width; j++) {

            Color32 c = color[i][j];
            unsigned char intensity = (unsigned char) ((c.blue*75 + c.green*155 + c.red*25)/(255));
            intensity /= 32;
            printf("%u", ((unsigned int) intensity));
            //printf("%c", pixel[intensity]);

        }

        printf("\n");

    }

}

void generate_image_into_file(Color32 **color, unsigned int width, unsigned int height, FILE *out_f)
{
    // TODO
}

