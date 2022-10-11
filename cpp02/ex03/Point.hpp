#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const Point &copy);
		Point(Fixed const x, Fixed const y);
		
		// Destructor
		~Point();
		
		// Operators
		Point & operator=(const Point &assign);
		
		// Getters / Setters
		Fixed const getX() const;
		void setX(Fixed const x);
		Fixed const getY() const;
		void setY(Fixed const y);

		// Functions
		bool bsp( Point const a, Point const b, Point const c, Point const point);
		bool liesToTheLeft(Point const a, Point const b, Point const point);
		
	private:
		Fixed const _x;
		Fixed const _y;
		
};

#endif
