#define cimg_use_jpeg
#include "CImg.h"
#include "stdio.h"
#include "iostream"

using namespace cimg_library_suffixed;


int main() {
    CImg<unsigned char> image("Lenna.jpg");

    for (int w = 0; w < image.width(); w++){
        for (int h = 0; h < image.height(); h++) {

            unsigned char *r = image.data(w, h, 0, 0);
            unsigned char *g = image.data(w, h, 0, 1);
            unsigned char *b = image.data(w, h, 0, 2);

            printf("R: %u G: %u B: %u\n", *r, *g, *b);
            unsigned char result[] = {*r / 2, *g / 2, *b / 2};
            printf("MIDI: ");
            for (int i = 0; i < 3; i++) {
                printf("%u ", result[i]);
            }
            printf("\n");


        }
    }

    return 0;

}
