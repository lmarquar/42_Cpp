#include "Span.hpp"

int main()
{
	Span s(5);

	s.addNumber(10);
	std::cout << s.getArrEl(0) << std::endl;
	return (0);
}
