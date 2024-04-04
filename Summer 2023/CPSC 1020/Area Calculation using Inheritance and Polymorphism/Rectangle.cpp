// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the class defintion for Rectangle
// Time: 15 minutes

#include "Rectangle.h"

Rectangle::Rectangle() : Shape("Rectangle"), length(0.0), width(0.0) {}

Rectangle::Rectangle(double length, double width) : Shape("Rectangle"), length(length), width(width) {}

// implement getArea()`
double Rectangle::getArea() {
    return length * width;
}
