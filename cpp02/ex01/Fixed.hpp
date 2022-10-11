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
		Fixed & operator=(const Fixed &assign);
		
		// Getters / Setters
		int getNum() const;
		void setNum(const int num);
		int getFract() const;

		//functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _num;
		static const int _fract;
};

std::ostream & operator<<(std::ostream& os, const Fixed & obj);

#endif
