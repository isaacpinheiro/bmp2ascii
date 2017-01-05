#include <stdio.h>
#include "bitmap.h"

void generate_image(Color *color, unsigned int width, unsigned int height)
{

    char pixel[10] = { ' ', '.', ',', ':', ';', 'o', 'x', '%', '#', '@' };
    int i, j;

    for (i=0; i<height; i++) {

        for (j=0; j<width; j++) {

            Color c = color[(i*width)+j];
            unsigned char intensity = (unsigned char) (9 - (((c.blue + c.green + c.red)*9)/(255*3)));
            //printf("%u", ((unsigned char) intensity));
            printf("%c", pixel[intensity]);

        }

        printf("\n");

    }

}

void generate_image_into_file(Color *color, unsigned int width, unsigned int height, FILE *out_f)
{
    // TODO
}

