// Name: Kaylee Pierce
// Class: CPSC 1021
// Date: 07/24/2023
// Desc: This is the header file for Shape
// Time: 10 minutes

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

class Shape
{
private:
  std::string name;
public:
  Shape() = default;
  Shape(std::string name) : name(name) {};

  virtual std::string printName() final {
	  return name;
  }

  // implement getArea() as an abstract function
  virtual double getArea() = 0;
};

#endif
