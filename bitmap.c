#include <stdio.h>
#include "bitmap.h"

void generate_image(Color32 **color, unsigned int width, unsigned int height)
{

    int i, j;

    for (i=0; i<height; i++) {

        for (j=0; j<width; j++) {

            Color32 c = color[i][j];
            unsigned char intensity = (unsigned char) ((c.blue*75 + c.green*155 + c.red*25)/(255));
            printf("%u", ((unsigned int) intensity));

            /*if (intensity == 0) {
                printf(" ");
            } else if (intensity == 1) {
                printf(".");
            } else if (intensity == 2) {
                printf(":");
            } else if (intensity == 3) {
                printf("i");
            } else if (intensity == 4) {
                printf("o");
            } else if (intensity == 5) {
                printf("V");
            } else if (intensity == 6) {
                printf("M");
            } else if (intensity == 7) {
                printf("@");
            }*/

        }

        printf("\n");

    }

}

void generate_image_into_file(Color32 **color, unsigned int width, unsigned int height, FILE *out_f)
{
    // TODO
}

