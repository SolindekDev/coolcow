#include <iostream>
#include <render/pixel.h>

void Pixel::draw_pixel(int x, int y, double r, double g, double b) {
	glBegin(GL_POINTS);
		glColor3f(r, g, b);
		glVertex2i(x,y);
	glEnd();
}