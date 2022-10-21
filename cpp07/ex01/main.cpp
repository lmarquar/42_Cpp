#include <iostream>
#include "iter.hpp"

void increasebyone(int &i)
{
	i++;
}

int main( void ) {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	}
	iter(arr, 11, &increasebyone);
	for (int i = 0; i < 10; i++)
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;

	return (0);
}
