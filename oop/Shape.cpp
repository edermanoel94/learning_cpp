#include "Shape.h"
#include <iostream>

Shape::Shape() {
	std::cout << "Constructor" << std::endl;
}

Shape::Shape(double height, double width) {
	this->height = height;
	this->width = width;
}

Shape::Shape(const Shape& original) {

}

Shape::~Shape() = default;

double Shape::getHeight() {
	return this->height;
}

double Shape::getWidth() {
	return this->width;
}
