#include <iostream>
#include <GL/glut.h>
#include <render/resize_window.h>

void ResizeWindowEvent::resize_window(int w, int h) {
    std::cout << "Window has resized width: " << w << " height: " << h << std::endl; 
}