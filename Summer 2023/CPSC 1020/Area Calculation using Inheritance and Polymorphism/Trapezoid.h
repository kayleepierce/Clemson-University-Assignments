// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the header file for the Trapezoid Class
// Time: 10 minutes


#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape  // inherit publically from Shape
{
private:
	double base1;
	double base2;
	double height;

public:
	Trapezoid();
	Trapezoid(double base1, double base2, double height);
	double getArea();
};

#endif
