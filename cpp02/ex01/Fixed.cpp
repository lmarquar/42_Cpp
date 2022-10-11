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

Fixed::Fixed(const int num)
{
	long	temp;
	int		x;
	long	mult;

	std::cout << "Int constructor called" << std::endl;
	x = 0;
	mult = 2;
	while (++x < _fract)
		mult = mult * 2;
	temp = num * mult;
	if (temp > INT_MAX)
	{
		std::cout << "integer value is too big and will be set to 0" << std::endl;
		_num = 0;
	}
	else
		_num = (int)temp;
}

Fixed::Fixed(const float numf)
{
	float	temp;
	int		x;
	long	mult;

	std::cout << "Float constructor called" << std::endl;
	x = 0;
	mult = 2;
	while (++x < _fract)
		mult = mult * 2;
	temp = numf * mult;
	x = temp;
	_num = (int)roundf(temp);
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
	_num = assign.getNum();
	return *this;
}

// Getters / Setters
int Fixed::getNum() const
{
	return _num;
}
void Fixed::setNum(const int num)
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
	return _num;
}

void Fixed::setRawBits(int const raw)
{
	_num = raw;
}

float Fixed::toFloat(void) const
{
	float	res;
	int		x;
	long	mult;

	x = 0;
	mult = 2;
	while (++x < _fract)
		mult = mult * 2;
	res = ((float)_num) / mult;
	return (res);
}

int Fixed::toInt(void) const
{
	float	temp;

	temp = this->toFloat();
	return (int)roundf(temp);
}


// stream overload
std::ostream & operator<<(std::ostream& os, const Fixed & obj)
{
	std::string	f_str;
	float		f;

	f = obj.toFloat();
	os << f;
	return (os)	;
}
