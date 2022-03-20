#include <iostream>
#include <utils/box_collision.h>

int BoxCollision::check_box_collision(
    double x1, 
    double y1, 
    double w1, 
    double h1, 
    double x2, 
    double y2, 
    double w2, 
    double h2
) {
    return x1 + w1 > x2 && x1 < x2 + w2 && y1 + h1 > y2 && y1 < y2 + h2;
}