#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_n = 0;
	_arr = new T[_n];
}

template <typename T>
Array<T>::Array(int n)
{
	_n = n;
	_arr = new T[_n];
}

template <typename T>
Array<T>::Array(const Array<T> &cpy)
{
	_n = cpy.size();
	_arr = new T[_n];
	for (int i = 0; i < _n; i++)
		_arr[i] = cpy[i];
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &assign)
{
	_n = assign.size();
	_arr = new T[_n];
	for (int i = 0; i < _n; i++)
		_arr[i] = assign[i];
	return (*this);
}

template <typename T>
T & Array<T>::operator[](int i)
{
	if (i < 0 || i >= _n)
		throw (IndexOutOfBoundsException());
	return (_arr[i]);
}

template <typename T>
Array<T>::~Array()
{
	delete _arr;
}

template <typename T>
T & Array<T>::operator[](int i) const
{
	if (i < 0 || i >= _n)
		throw (IndexOutOfBoundsException());
	return (_arr[i]);
}

template <typename T>
int	Array<T>::size() const
{
	return (_n);
}

template <typename T>
const char * Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "IndexOutOfBoundsException: Index value out of bounds";
}
