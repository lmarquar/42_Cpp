#include "Point.hpp"

// Constructors
Point::Point()
{
	_x = Fixed();
	_y = Fixed();
}

Point::Point(const Point &copy)
{
	_x = copy.getX();
	_y = copy.getY();
}

Point::Point(Fixed const x, Fixed const y)
{
	_x = x;
	_y = y;
}


// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	_x = assign.getX();
	_y = assign.getY();
	return *this;
}


// Getters / Setters
Fixed const Point::getX() const
{
	return _x;
}

Fixed const Point::getY() const
{
	return _y;
}


// Functions
bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (liesToTheLeft(a, b, point))
		std::cout << "line a to b is allright" << std::endl;

	c.getX();
	return (true);
}

bool Point::liesToTheLeft(Point const a, Point const b, Point const point)
{
	Fixed	slope;
	Fixed	y_intercept;
	bool	orientation;

	std::cout << "a.getX" << a.getX() << "\nb.getX" << b.getX();
	if (a.getX() < b.getX())
	{
		slope = (b.getY() - a.getY()) / (b.getX() - a.getX());
		orientation = true;
	}
	else if (a.getX() > b.getX())
	{
		slope = (a.getY() - b.getY()) / (a.getX() - b.getX());
		orientation = false;
	}
	else
		std::cout << "straight up, not implemented yet" << std::endl;
	y_intercept = a.getY() - (a.getX() * slope);
	std::cout << "slope: " << slope << "\ny_intercept: " << y_intercept << std::endl;
	if (point.getY() > (point.getX() * slope) + y_intercept && orientation)
		return (true);
	else
		return (false);
}
