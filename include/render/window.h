#ifndef WINDOW_H

#define WINDOW_H

#include <iostream>
#include <GL/glut.h>

namespace WindowRender {
    class Window {
        private:
            int width;
            int height;
            char* title;
        public:
            void init(int argc, char** argv, int width, int height, char* title);
            
            static void display();
            static void resize_window(int w, int h);
            static void mouse(int btn, int state, int x, int y);
            static void keyboard(unsigned char keycode, int x, int y);
            static void idle();

            static int center_width(int width);
            static int center_height(int height);
    };
}


#endif