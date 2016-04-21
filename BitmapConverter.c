//
// Created by ganymed on 22/04/16.
//

#include "BitmapConverter.h"


void task03() {
    FILE* bitmapFile = fopen("bitmap.bmp", "rb");

    byte header[HeaderLength];
    fread(header, 1, HeaderLength, bitmapFile);

    int bitmapLength = FileLength - HeaderLength;
    byte bitmap[bitmapLength];
    fread(bitmap, 1, bitmapLength, bitmapFile);

    fclose(bitmapFile);


    for(int i = 0; i < bitmapLength; i++) {
        bitmap[i] = 255 - bitmap[i];
    }

    FILE* convertedBitmapFile = fopen("bitmap2.bmp", "wb");

    fwrite(header, 1, HeaderLength, convertedBitmapFile);
    fwrite(bitmap, 1, bitmapLength, convertedBitmapFile);

    fclose(convertedBitmapFile);
}
