#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <climits>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
	 	Fixed(const int num);
		Fixed(const float numf);
		
		// Destructor
		~Fixed();
		
		// Operators
		const Fixed & operator=(const Fixed &assign) const;

		bool operator>(const Fixed &assign) const;
		bool operator<(const Fixed &assign) const;
		bool operator>=(const Fixed &assign) const;
		bool operator<=(const Fixed &assign) const;
		bool operator==(const Fixed &assign) const;
		bool operator!=(const Fixed &assign) const;

		Fixed operator+(const Fixed &add);
		Fixed operator-(const Fixed &subtr) const;
		Fixed operator*(const Fixed &mult) const;
		Fixed operator/(const Fixed &div);

		Fixed & operator++();
		Fixed & operator--();
	 	Fixed operator++(int);
		Fixed operator--(int);
		// Getters / Setters
		int getNum() const;
		void setNum(const int num);
		int getFract() const;

		//functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getMult(void) const;
		Fixed & min(Fixed &n1, Fixed &n2);
		static const Fixed & min(const Fixed &n1, const Fixed &n2);
		Fixed & max(Fixed &n1, Fixed &n2);
		static const Fixed & max(const Fixed &n1, const Fixed &n2);

	private:
		int _num;
		static const int _fract;
};

std::ostream & operator<<(std::ostream& os, const Fixed & obj);

#endif
