#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {

public:
	Circle();
    Circle(double);
	double area();
};
#endif
