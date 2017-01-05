#ifndef BITMAP_H
#define BITMAP_H

#pragma pack(1)
typedef struct BitmapHeader {
    unsigned char signature[2];
    unsigned int size;
    char reserved[4];
    unsigned int offset;
} BitmapHeader;

#pragma pack(1)
typedef struct DIB {
    unsigned int sizeheader;
    unsigned int width;
    unsigned int height;
    unsigned short planes;
    unsigned short bpp;
    unsigned int compression;
    unsigned int imgsize;
    unsigned int hppm;
    unsigned int vppm;
    unsigned int n_colors;
    unsigned int n_important_colors;
    unsigned int redmask;
    unsigned int bluemask;
    unsigned int greenmask;
    unsigned int alphamask;
    unsigned int cs_type;
    char pad[36];
    unsigned int gamma_red;
    unsigned int gamma_green;
    unsigned int gamma_blue;
} DIB;

#pragma pack(1)
typedef struct Color32 {
    unsigned char blue;
    unsigned char green;
    unsigned char red;
    unsigned char alpha;
} Color32;

#pragma pack(1)
typedef struct Color {
    unsigned char blue;
    unsigned char green;
    unsigned char red;
} Color;

void generate_image(Color *color, unsigned int width, unsigned int height);
void generate_image_into_file(Color *color, unsigned int width, unsigned int height, FILE *out_f);

#endif

