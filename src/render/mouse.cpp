#include <iostream>
#include <GL/glut.h>

#include <render/window.h>
#include <render/pixel.h>
#include <render/button_widget.h>
#include <render/mouse.h>
#include <utils/box_collision.h>
#include <utils/string.h>

ButtonWidget* buttons[1024];
int buttons_length = 0;

void MouseEvent::handle_button_click(ButtonWidget* btn) {
    buttons[buttons_length] = btn;
    buttons_length++;
}

void MouseEvent::mouse(int btn, int state, int x, int y) {
    std::cout << "x: " << x << " y: " << y << " btn: " << btn << " state: " << state << std::endl;
    if (buttons_length >= 1 && btn == 0 && state == 0) {
        for (int i = 0; i < buttons_length-1; i++) {
            if (BoxCollision::check_box_collision(x,y,2,2,buttons[i]->x,buttons[i]->y,buttons[i]->width,buttons[i]->height) == 1) {
                reinterpret_cast<void(*)()>(buttons[i]->event_click)();
                break;
            }
        }
    } 
}