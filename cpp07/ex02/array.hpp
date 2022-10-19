#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		Array(int n);
		Array(const Array &copy);
		Array & operator=(const Array &assign);
		~Array();

	private:
		T	*_arr;
};

#endif
