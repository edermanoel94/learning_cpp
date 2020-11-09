#include "Shape.h"
#include <iostream>

int main() {

	Shape s1; // initialize a object with default constructor

	Shape s(5.0, 6.0); // initialize a object with a custom (overload) constructor

	std::cout << s.getHeight() << std::endl;
	std::cout << s.getWidth() << std::endl;

	s.setHeight(2.0);
	s.setWidth(3.0);

	std::cout << s.getHeight() << std::endl;
	std::cout << s.getWidth() << std::endl; 

	color c{255, 255, 255, 255};

	std::cout << s.getColor().r << std::endl;

	s.setColor(c);

	std::cout << s.getColor().r << std::endl;

    std::cout << s << std::endl;

	return 0;
}
