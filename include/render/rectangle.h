#ifndef RECTANGLE_H

#define RECTANGLE_H

#include <iostream>
#include <GL/glut.h>
#include <render/window.h>
#include <render/pixel.h>
#include <render/rectangle.h>

namespace Rectangle {
    void draw_rectangle(int x, int y, int width, int height, double r, double g, double b);
}

#endif