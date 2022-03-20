#include <GL/glut.h>
#include <iostream>
#include <render/button_widget.h>
#include <render/pixel.h>
#include <render/font_render.h>

ButtonWidget::ButtonWidget(
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
) {
    // Position of button
    this->x = x;
    this->y = y;    

    // Size of button
    this->width = width;
    this->height = height;

    // Value of button
    this->value = value;
    
    // Color of text
    this->r_text = r_text;
    this->g_text = g_text;
    this->b_text = b_text;
    
    // Event
    this->event_click = event_click;
    this->event_hover = event_hover;

    // Draw button background
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) 
            Pixel::draw_pixel(i+x, j+y, 0.7411, 0.7411, 0.7411);
    }

    // Draw button border
    for (int i = 0; i < width; i++) {
        for (int j = height-2; j < height; j++)
            Pixel::draw_pixel(i+x, j+y, 0.7411-0.1, 0.7411-0.1, 0.7411-0.1);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < height; j++)
            Pixel::draw_pixel(i+x, j+y, 0.7411-0.1, 0.7411-0.1, 0.7411-0.1);
    }

    // Draw text of button
    FontRender::draw_text(
        value, 
        r_text, 
        g_text, 
        b_text,
        (width/2)-(3.5*value.length()),
        (720-y)-((height/2)+(height/4))
    );
    
    return;
}