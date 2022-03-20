#ifndef FONT_RENDER_H

#define FONT_RENDER_H

#include <iostream>
#include <GL/glut.h>

namespace FontRender {
    void draw_text(std::string str, int r, int g, int b, int x, int y);
}

#endif