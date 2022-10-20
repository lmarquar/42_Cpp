#include <iostream>
#include "Array.tpp"

int main( void ) {
	int * a = new int();

	std::cout << *a << std::endl;
	Array<int> b(5);
	Array<int> c(4);

	b[0] = 42;
	std::cout << "b[0]: " << b[0] << std::endl;
	c = b;
	std::cout << "c[0]: " << c[0] << std::endl;
	return (0);
}
