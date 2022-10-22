#include "Span.hpp"

int main()
{
	Span s(5);

	for (int i = 0; i < 5; i++)
		s.addNumber(i);
	std::cout << s.getArrEl(0) << std::endl;
	return (0);
}
