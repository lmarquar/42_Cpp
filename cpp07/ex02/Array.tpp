#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_arr = new T[0];
}

template <typename T>
Array<T>::Array(int n)
{
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T> &cpy)
{
	_arr = new T[n];
}


template <typename T>
Array<T>::~Array()
{
	delete _arr;
}
