#include "Circle.h"
#include <math.h>

Circle::Circle() {
	
}

Circle::Circle(double w) {
	this->width = w;
}


double Circle::area() {

	return 3.14159265359 * pow((this->width / 2), 2);
}
