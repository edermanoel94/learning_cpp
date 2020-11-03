#ifndef SHAPE_H
#define SHAPE_H

// cannot initialize a variable with the same name of struct
struct color {

	unsigned int r;
	unsigned int g;
	unsigned int b;
	unsigned int a;
};

class Shape {
	color c;

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

	void setHeight(double height);
	void setWidth(double width);
	
	void setColor(const color& c);
	color getColor();
};

#endif
