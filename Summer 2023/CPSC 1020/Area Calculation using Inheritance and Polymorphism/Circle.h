// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the header file for the Circle Class
// Time: 10 minutes

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape // inherit publically from Shape
{
private:
  double radius;
  const double PI = 3.14;

public:
  Circle();
  Circle(double radius);
  double getArea();
};

#endif
