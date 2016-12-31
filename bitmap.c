#include <stdio.h>
#include "bitmap.h"

void generate_image(Color32 *color, unsigned int width, unsigned int height)
{

    int i, j;

    for (i=0; i<height; i++) {

        for (j=0; j<width; j++) {

            //Color32 c = color[(i*width)+j];
            //char p = 1 - (c.blue + c.green + c.red)*1/(255*3);
            //printf("%c", p);
            //printf("0");

        }

        printf("\n");

    }

}

void generate_image_into_file(Color32 *color, unsigned int width, unsigned int height, FILE *in_f)
{
    // TODO
}

