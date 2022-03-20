#include <iostream>
#include <GL/glut.h>
#include <render/window.h>
#include <render/pixel.h>
#include <render/rectangle.h>

void Rectangle::draw_rectangle(int x, int y, int width, int height, double r, double g, double b) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            Pixel::draw_pixel(i+x, j+y, r, g, b);
        }
    }
}