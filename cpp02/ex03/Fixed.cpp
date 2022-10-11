#include "Fixed.hpp"

const int Fixed::_fract = 8;

// Constructors
Fixed::Fixed()
{
	_num = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int num)
{
	long	temp;
	long	numl;
	long	multl;

	numl = num;
	multl = this->getMult();
	temp = numl * multl;
	if (temp > INT_MAX)
	{
		std::cout << num << " integer value is too big and will be set to 0" << std::endl;
		_num = 0;
	}
	else
		_num = (int)temp;
}

Fixed::Fixed(const float numf)
{
	float	temp;

	temp = numf * (float)this->getMult();
	_num = (int)roundf(temp);
}


// Destructor
Fixed::~Fixed()
{
}


// Operators
const Fixed & Fixed::operator=(const Fixed &assign) const
{
	return (assign);
}

bool Fixed::operator>(const Fixed &comp) const
{
	return (_num > comp.getNum());
}

bool Fixed::operator<(const Fixed &comp) const
{
	return (_num < comp.getNum());
}

bool Fixed::operator>=(const Fixed &comp) const
{
	return (_num >= comp.getNum());
}

bool Fixed::operator<=(const Fixed &comp) const
{
	return (_num <= comp.getNum());
}

bool Fixed::operator==(const Fixed &comp) const
{
	return (_num == comp.getNum());
}

bool Fixed::operator!=(const Fixed &comp) const
{
	return (_num != comp.getNum());
}

Fixed Fixed::operator+(const Fixed &add)
{
	long	res;
	Fixed	tmp;

	res = this->getNum() + add.getNum();
	if (res > INT_MAX || res < INT_MIN)
		std::cout << "Error: Fixed::operator+() overflowed" << std::endl;
	tmp.setNum(res);
	return (Fixed(tmp.toInt()));
}

Fixed Fixed::operator-(const Fixed &subtr) const
{
	long	res;
	Fixed	tmp;

	res = this->getNum() - subtr.getNum();
	if (res > INT_MAX || res < INT_MIN)
		std::cout << "Error: Fixed::operator+() overflowed" << std::endl;
	tmp.setNum(res);
	return (Fixed(tmp.toInt()));
}

Fixed Fixed::operator*(const Fixed &mult) const
{
	float	f;

	f = this->toFloat() * mult.toFloat();
	if (f / this->toFloat() != mult.toFloat())
		std::cout << "Error: Fixed::operator*() overflowed" << std::endl;
	return (Fixed(f));
}

Fixed Fixed::operator/(const Fixed &mult)
{
	float	f;

	f = this->toFloat() / mult.toFloat();
	if (f * this->toFloat() != mult.toFloat())
		std::cout << "Warning: Fixed::operator/() overflowed" << std::endl;
	return (Fixed(f));
}

Fixed& Fixed::operator++()
{
	int	i;

	i = this->getRawBits();
	this->setRawBits(i + 1);
	return (*this);
}

Fixed& Fixed::operator--()
{
	int	i;

	i = this->getRawBits();
	this->setRawBits(i + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	fixed(*this);

	operator++();
	return (fixed);
}

Fixed Fixed::operator--(int)
{
	Fixed	fixed(*this);

	operator--();
	return (fixed);
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

	res = ((float)_num) / this->getMult();
	return (res);
}

int Fixed::toInt(void) const
{
	float	temp;

	temp = this->toFloat();
	return (int)roundf(temp);
}

int Fixed::getMult(void) const
{
	int	x;
	int	mult;

	x = 0;
	mult = 2;
	while (++x < _fract)
		mult = mult * 2;
	return (mult);
}

Fixed & Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

const Fixed & Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

Fixed & Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 >= n2)
		return (n1);
	else
		return (n2);
}

const Fixed & Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 >= n2)
		return (n1);
	else
		return (n2);
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
