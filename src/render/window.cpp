#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

#include <render/size.h>
#include <render/display.h>
#include <render/resize_window.h>
#include <render/mouse.h>
#include <render/keyboard.h>
#include <render/idle.h>

Window::Window(int argc, char** argv, int width, int height, char* title) {
    this->width = width;
	this->height = height;
	this->title = title;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowPosition(Size::center_width(this->width), Size::center_height(this->height));
	glutInitWindowSize(this->width, this->height);
	glutCreateWindow(this->title);

	glutDisplayFunc(DisplayEvent::display);
	glutReshapeFunc(ResizeWindowEvent::resize_window);
	glutMouseFunc(MouseEvent::mouse);
	glutKeyboardFunc(KeyboardEvent::keyboard);
	glutIdleFunc(IdleEvent::idle);

	glutMainLoop();
}