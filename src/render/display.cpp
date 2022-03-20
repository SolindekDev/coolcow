#include <iostream>
#include <unistd.h>
#include <GL/glut.h>

#include <render/window.h>
#include <render/font_render.h>
#include <render/pixel.h>
#include <render/rectangle.h>
#include <render/button_widget.h>
#include <render/display.h>
#include <render/mouse.h>

void event_hover() {}
void event_click() {
	std::cout << "sieam siema działa on click es?" << std::endl;
	glutSetCursor(GLUT_CURSOR_CROSSHAIR);
}

void event_hover2() {}
void event_click2() {
	std::cout << "sieam siema działa on click es?22" << std::endl;
}

void DisplayEvent::display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1280.0, 720.0,0.0);

	Rectangle::draw_rectangle(
		0,
		0,
		1280, 
		720,
		0.8431372549,
		0.8431372549,
		0.8431372549
	);

	// Rectangle::draw_rectangle(
	// 	0,
	// 	0,
	// 	1280, 
	// 	40,
	// 	0.2431372549,
	// 	0.2431372549,
	// 	0.2431372549
	// );

	// FontRender::draw_text("Hello!", 0, 0, 0, 0, 674);

	ButtonWidget* btn = new ButtonWidget(
	    5,
		29, 
		"Click Me!",
		100, 
		30,
		0,
		0,
		0,
	    (void*)event_click,
        (void*)event_hover
	);

	MouseEvent::handle_button_click(btn);

	ButtonWidget* btn2 = new ButtonWidget(
	    321,
		312, 
		"Click Me2!",
		100, 
		30,
		0,
		0,
		0,
	    (void*)event_click2,
        (void*)event_hover2
	);

	MouseEvent::handle_button_click(btn2);

	glutSwapBuffers();
}
