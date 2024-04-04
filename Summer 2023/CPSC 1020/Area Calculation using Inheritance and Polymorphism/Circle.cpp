// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the class defintion for Circle
// Time: 20 minutes

#include "Circle.h"

Circle::Circle() : Shape("Circle"), radius(0.0) {}

Circle::Circle(double radius) : Shape("Circle"), radius(radius) {}

// implement getArea()
double Circle::getArea() {
  return PI * radius * radius;
}
