// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the class defintion for Square
// Time: 20 minutes

#include "Square.h"

Square::Square() : Shape("Square"), side(0.0) {}

Square::Square(double side) : Shape("Square"), side(side) {}

// implement getArea()
double Square::getArea() {
	return side * side;
}
