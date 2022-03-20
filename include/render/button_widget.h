#ifndef BUTTON_WIDGET_H

#define BUTTON_WIDGET_H

#include <iostream>
#include <GL/glut.h>

class ButtonWidget {
public:
    // Position of button
    int x;
    int y;
    
    // Size of button
    int width;
    int height;

    // Value of button
    std::string value;

    // Color of text
    double r_text;
    double g_text;
    double b_text;
    
    // Events
    void* event_click;
    void* event_hover;

    ButtonWidget(
        int x, 
        int y, 
        std::string value, 
        int width, 
        int height, 
        double r_text, 
        double g_text, 
        double b_text,
        void* event_click,
        void* event_hover
    );
};

#endif