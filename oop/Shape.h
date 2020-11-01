#ifndef SHAPE_H
#define SHAPE_H

class Shape {

protected:
	double height;
	double width;
public:

	Shape();
	Shape(double height, double width);
	Shape(const Shape& orig);
	virtual ~Shape(); // deconstructor, virtual is for override

	double getHeight();
	double getWidth();
};

#endif
