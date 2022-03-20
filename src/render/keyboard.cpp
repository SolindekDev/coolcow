#include <iostream>
#include <GL/glut.h>
#include <render/window.h>
#include <render/keyboard.h>

void KeyboardEvent::keyboard(unsigned char keycode, int x, int y) {
    std::cout << "x: " << x << " y: " << y << " keycode: " << keycode << std::endl;
}