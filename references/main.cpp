#include <iostream>

void passing_by_ptr(char *some_ptr);
void passing_by_value(char some_value);
void passing_by_ref_mut(char &some_ref);
void passing_by_ref_imut(const char &some_ref);


int main() {

	char ch = 'a';

	std::cout << ch << std::endl;

	passing_by_ptr(&ch);

	std::cout << ch << std::endl;

	passing_by_value(ch);

	std::cout << ch << std::endl;

	passing_by_ref_mut(ch);

	std::cout << ch << std::endl;

	passing_by_ref_imut(ch);

	std::cout << ch << std::endl;

	return 0;
}

void passing_by_ptr(char* some_ptr) {

	*some_ptr = 'b';
}

void passing_by_value(char some_value) {

	some_value = 'c';
}

void passing_by_ref_mut(char& some_ref) {

	some_ref = 'd';
}

void passing_by_ref_imut(const char& some_ref) {

	std::cout << some_ref << std::endl; 
}

// passando o valor por referencia minimizo a quantidade de bytes gerada na memoria.
