#include "Point.hpp"

int	main()
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(4), Fixed(4));
	Point c(Fixed(0), Fixed(4));
	Point point(Fixed(2), Fixed(2));

	a.bsp(a, b, c, point);
	return (0);
}
