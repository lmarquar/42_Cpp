#include "Fixed.hpp"

const int Fixed::_fract = 8;

// Constructors
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_num = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_num = assign.getRawBits();
	return *this;
}


// Getters / Setters
int Fixed::getNum() const
{
	return _num;
}
void Fixed::setNum(int num)
{
	_num = num;
}

int Fixed::getFract() const
{
	return _fract;
}


// Functions
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}

void Fixed::setRawBits(int const raw)
{
	_num = raw;
}