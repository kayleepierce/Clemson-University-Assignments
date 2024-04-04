// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the class defintion for Trapezoid
// Time: 20 minutes

#include "Trapezoid.h"

Trapezoid::Trapezoid() : Shape("Trapezoid"), base1(0.0), base2(0.0), height(0.0) {}

Trapezoid::Trapezoid(double base1, double base2, double height) : Shape("Trapezoid"), base1(base1), base2(base2), height(height) {}

// implement getArea()
double Trapezoid::getArea() {
	return (base1 + base2) * height / 2;
}
