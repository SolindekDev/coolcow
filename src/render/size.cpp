#include <iostream>
#include <GL/glut.h>
#include <render/size.h>

int Size::center_width(int width) {
    int window_width = glutGet(GLUT_SCREEN_WIDTH);
    return (window_width / 2)-(width / 2);
}

int Size::center_height(int height) {
    int window_height = glutGet(GLUT_SCREEN_HEIGHT);
    return (window_height / 2)-(height / 2);
}