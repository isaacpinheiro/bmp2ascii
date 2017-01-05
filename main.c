#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bitmap.h"

int main(int argc, char **argv)
{

    char *input, *output;
    FILE *in_f, *out_f;
    BitmapHeader bh;
    DIB dib;

    if (argc < 2) {

        printf("\nbmp2ascii - version: 1.0\n");
        printf("Author: Isaac Pinheiro <isaacpnhr@gmail.com>\n\n");
        printf("Usage:\n\n");
        printf("\tBasic usage:\n\n"); 
        printf("\t\t$ bmp2ascii /path/to/your/file.bmp\n\n");
        printf("\tGenerating an output file: \n\n");
        printf("\t\t$ bmp2ascii /path/to/your/file.bmp /path/to/your/output_file.txt\n\n");
        printf("\t\t\tor\n\n");
        printf("\t\t$ bmp2ascii /path/to/your/file.bmp > output_file.txt\n\n");

    } else {

        input = (char*) malloc(sizeof(char) * (strlen(argv[1]) + 1));
        strcpy(input, argv[1]);
        in_f = fopen(input, "rb");

        if (argc > 2) {
            output = (char*) malloc(sizeof(char) * (strlen(argv[2]) + 1));
            strcpy(output, argv[2]);
            out_f = fopen(output, "w");
        }

        if (in_f != NULL) {

            fread(&bh, sizeof(BitmapHeader), 1, in_f);
            fread(&dib, sizeof(DIB), 1, in_f);

            Color32 *color = (Color32*) malloc(sizeof(Color32) * dib.width * dib.height);
            fread(color, (sizeof(Color32) * dib.width * dib.height), 1, in_f);

            if (argc > 2) generate_image_into_file(color, dib.width, dib.height, out_f);
            else generate_image(color, dib.width, dib.height);

            free(color);

        }

        if (in_f != NULL) fclose(in_f);
        free(input);

        if (argc > 2) {
            if (out_f != NULL) fclose(out_f);
            free(output);
        }

    }

    return 0;

}

