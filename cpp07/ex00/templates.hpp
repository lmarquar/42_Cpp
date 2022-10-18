#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
T	max(T & x, T & y)
{
	return (x>=y ? x : y);
};

template<typename T>
T	min(T & x, T & y)
{
	return (x<y ? x : y);
};

template<typename T>
void	swap(T & x, T & y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
};

#endif
