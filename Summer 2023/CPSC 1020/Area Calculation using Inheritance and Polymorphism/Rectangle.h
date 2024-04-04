// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the header file for Rectangle class
// Time: 10 minutes

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape // inherit publically from Shape
{
private:
	double length;
	double width;

public:
	Rectangle();
	Rectangle(double length, double width);
	double getArea();
};

#endif
