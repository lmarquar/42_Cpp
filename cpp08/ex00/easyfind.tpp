#include "easyfind.hpp"

template <typename T>
int	easyfind(T t, int toBeFound)
{
	std::vector<int>::iterator vector_it;

	vector_it = std::find(t.begin(), t.end(), toBeFound);
	if (vector_it == t.end())
	{
		std::cout << "element not found, -1 returned" << std::endl;
		return (-1);
	}
	std::cout << "Element " << toBeFound <<" found at position : " ;
	std::cout << vector_it - t.begin() << " (counting from zero) \n" ;
	return *vector_it;
}
