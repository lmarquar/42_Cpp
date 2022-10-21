#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T arr[], int length, void (*fptr)(const T &t))
{
	for (int i = 0; i < length; i++)
	{
		fptr(arr[i]);
	}
};

template <typename T>
void	iter(T arr[], int length, void (*fptr)(T &t))
{
	for (int i = 0; i < length; i++)
	{
		fptr(arr[i]);
	}
};

#endif
