// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the header file for Square class
// Time: 10 minutes

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape // inherit publically from Shape
{
private:
	double side;

public:
	Square();
	Square(double side);
	double getArea();
};

#endif
