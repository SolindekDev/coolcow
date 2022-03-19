#include <iostream>
#include <GL/glut.h>
#include <render/window.h>

int WindowRender::Window::center_width(int width) {
    int window_width = glutGet(GLUT_SCREEN_WIDTH);
    return (window_width / 2)-(width / 2);
}

int WindowRender::Window::center_height(int height) {
    int window_height = glutGet(GLUT_SCREEN_HEIGHT);
    return (window_height / 2)-(height / 2);
}

void WindowRender::Window::init(int argc, char** argv, int width, int height, char* title) {
    WindowRender::Window::width = width;
    WindowRender::Window::height = height;
    WindowRender::Window::title = title;
    
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutInitWindowPosition(center_width(WindowRender::Window::width), center_height(WindowRender::Window::height));
	glutInitWindowSize(WindowRender::Window::width, WindowRender::Window::height);
	glutCreateWindow(WindowRender::Window::title);

	glutDisplayFunc(WindowRender::Window::display);
	glutReshapeFunc(WindowRender::Window::resize_window);
	glutMouseFunc(WindowRender::Window::mouse);
	glutKeyboardFunc(WindowRender::Window::keyboard);
	glutIdleFunc(WindowRender::Window::idle);

	glutMainLoop();
}