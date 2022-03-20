#include <iostream>
#include <render/font_render.h>
#include <render/window.h>
#include <render/pixel.h>

void FontRender::draw_text(std::string str, int r, int g, int b, int x, int y) {
    glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	gluOrtho2D(0, 1280, 0, 720);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();
    glColor3f(r, g, b);
	glRasterPos2i(x, y); 
	for (size_t i = 0; i < str.length(); i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str[i]);
	}
	glPopMatrix();

	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);

    return;
}