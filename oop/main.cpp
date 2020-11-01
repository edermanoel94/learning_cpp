#include "Shape.h"
#include <iostream>

int main() {

	std::cout << "Inicando" << std::endl;
	Shape* s1 = new Shape();
	Shape s(5.0, 6.0);
	std::cout << s.getHeight() << std::endl;
	std::cout << s.getWidth() << std::endl;
	return 0;
}
