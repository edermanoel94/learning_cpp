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

protected:
	double height;
	double width;
	color c;
public:

	Shape();
	Shape(double height, double width);
	Shape(const Shape& orig);
	virtual ~Shape(); // deconstructor, virtual is for override
	
	virtual double Area();

	double getHeight();
	double getWidth();

	void setHeight(double height);
	void setWidth(double width);
	
    operator const char*();

	void setColor(const color& c);
	color getColor();
};

#endif
