#ifndef KEYBOARD_H

#define KEYBOARD_H

#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

namespace KeyboardEvent {
    void keyboard(unsigned char keycode, int x, int y);
}

#endif