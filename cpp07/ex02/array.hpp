#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(int n);
		Array(const Array &cpy);
		Array & operator=(const Array &assign);
		T & operator[](int i);
		T & operator[](int i) const;
		~Array();

		int	size() const;

		class IndexOutOfBoundsException : public std::exception {
			virtual const char* what() const throw();
		};

	private:
		T	*_arr;
		int	_n;
};

#endif
