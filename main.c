#include <stdio.h>
#include "bitmap.h"

int main(int argc, char **argv)
{

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

        // TODO

    }

    return 0;

}

