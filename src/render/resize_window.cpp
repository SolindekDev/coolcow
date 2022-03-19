#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

void WindowRender::Window::resize_window(int w, int h) {
    std::cout << "Window has resized width: " << w << " height: " << h << std::endl; 
}