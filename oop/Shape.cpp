#include "Shape.h"
#include <iostream>

Shape::Shape() {
	std::cout << "Constructor" << std::endl;
}

// Why struct not initialized, get some random values?
Shape::Shape(double x, double y) {
	height = y;
	width = x;
	c = {};
}

Shape::Shape(const Shape& original) {

}

Shape::~Shape() = default;

double Shape::getHeight() { return height; }

double Shape::getWidth() { return width; }

void Shape::setWidth(double x) { width = x; }

void Shape::setHeight(double y) { height = y; }

// Question: if pass a imutable reference to a class, 
// after destroy, will destroy the reference too?
void Shape::setColor(const color& color) { c = color; }

color Shape::getColor() { return c; }
