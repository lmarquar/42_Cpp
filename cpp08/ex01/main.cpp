#include "Span.hpp"

int main()
{
/* 	Span s(5);

	try {
		for (int i = 0; i < 1; i++)
			s.addNumber(i);
		std::cout << s.getArrEl(1) << std::endl;
		std::cout << "s.shortestSpan: " << s.shortestSpan() << std::endl;
		std::cout << "s.longestSpan: " << s.longestSpan() << std::endl;
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}*/

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0); 
}
