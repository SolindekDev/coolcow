#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

void WindowRender::Window::keyboard(unsigned char keycode, int x, int y) {
    std::cout << "x: " << x << " y: " << y << " keycode: " << keycode << std::endl;
}