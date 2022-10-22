#include "Span.hpp"
#include <vector>
#include <cstdlib>

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
	} */
	Span s2(5);
	std::vector<int> vect;
	for (int i = 0; i < 5; i++)
		vect.push_back(rand());
	std::vector<int>::iterator vect_it = vect.begin();
	s2.addIterator(vect_it, (unsigned)vect.size());
	std::cout << s2.getArrEl(4) << std::endl;
	std::vector<int>::iterator vect_end = vect.end();
	std::cout << "end of vector: " << *(vect_end - 1) << std::endl;

/* 	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl; */

	return (0); 
}
