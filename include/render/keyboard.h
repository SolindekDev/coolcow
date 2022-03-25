#ifndef KEYBOARD_H

#define KEYBOARD_H

#include <iostream>
#include <GL/glut.h>
#include <render/input_widget.h>
#include <render/window.h>

namespace KeyboardEvent {
    void handle_input_keyboard(InputWidget* input);
    void keyboard(unsigned char keycode, int x, int y);
}

#endif