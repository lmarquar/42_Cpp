#include <iostream>
#include "Fixed.hpp"

/* int main( void )
{
	std::cout << "start of 42-test:" << std::endl;
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "a > b " << std::boolalpha << (a > b) << std::endl;
	std::cout << "b > c " << std::boolalpha << (b > c) << std::endl;
	std::cout << "b < c " << std::boolalpha << (b < c) << std::endl;
	std::cout << "a < b " << std::boolalpha << (a < b) << std::endl;
	std::cout << "a >= b " << std::boolalpha << (a >= b) << std::endl;
	std::cout << "b >= c " << std::boolalpha << (b >= c) << std::endl;
	std::cout << "b <= c " << std::boolalpha << (b <= c) << std::endl;
	std::cout << "a <= b " << std::boolalpha << (a <= b) << std::endl;
	std::cout << "b >= d " << std::boolalpha << (b <= d) << std::endl;
	std::cout << "d <= b " << std::boolalpha << (d <= b) << std::endl;
	std::cout << "d != b " << std::boolalpha << (d != b) << std::endl;
	std::cout << "a == c " << std::boolalpha << (a == c) << std::endl;

	std::cout << "a + b " << (a + b) << std::endl;
	std::cout << "a - b " << (a - b) << std::endl;
	std::cout << "a * b " << (a * b) << std::endl;
	std::cout << "a / b " << (a / b) << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "after a++: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "after a--: " << a << std::endl;
	std::cout << "min(a, b)" << Fixed::min(a, b) << std::endl;
	std::cout << "min(b, a)" << Fixed::min(b, a) << std::endl;
	std::cout << "max(a, b)" << Fixed::max(a, b) << std::endl;
	std::cout << "max(b, a)" << Fixed::max(b, a) << std::endl;

	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "e: " << e << std::endl;

	Fixed const f(-10.1f);
	std::cout << "f: " << f << std::endl;

	int x;
	x = 1;
	std::cout << "x++: " << x++ << std::endl;
	return 0;
} */
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a.max( a, b ) << std::endl;
	return 0;
}

