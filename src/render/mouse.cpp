#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

void WindowRender::Window::mouse(int btn, int state, int x, int y) {
    std::cout << "x: " << x << " y: " << y << std::endl;
}