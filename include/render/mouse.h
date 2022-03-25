#ifndef MOUSE_H

#define MOUSE_H

#include <iostream>
#include <GL/glut.h>
#include <render/window.h>
#include <render/button_widget.h>
#include <render/input_widget.h>

namespace MouseEvent {
    void mouse(int btn, int state, int x, int y);
    void handle_button_click(ButtonWidget* btn);
    void handle_input_focus(InputWidget* input);
}

#endif