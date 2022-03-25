#ifndef INPUT_WIDGET_H

#define INPUT_WIDGET_H

#include <iostream>
#include <GL/glut.h>

class InputWidget {
public:
    // Position of button
    int x;
    int y;
    
    // Size of button
    int width;
    int height;

    // Value of input
    std::string value;

    // Focus
   	bool focus;

    // Color of text
    double r_text;
    double g_text;
    double b_text;
    
    InputWidget(
        int x, 
        int y, 
        int width, 
        int height, 
        double r_text, 
        double g_text, 
        double b_text
    );

    void draw();
};

#endif // INPUT_WIDGET_H