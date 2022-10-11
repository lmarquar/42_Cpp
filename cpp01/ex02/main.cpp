#include <iostream>
#include <string>

int	main()
{
	std::string	s;
	std::string	*stringPTR;
	std::string&	stringREF = s;

	s = "HI THIS IS BRAIN";
	stringPTR = &s;
	std::cout << "s(address):         " << &s << std::endl;
	std::cout << "stringPTR(address): " << stringPTR << std::endl;
	std::cout << "stringREF(address): " << &stringREF << std::endl;
	std::cout << "s(value):         " << s << std::endl;
	std::cout << "stringPTR(value): " << *stringPTR << std::endl;
	std::cout << "stringREF(value): " << stringREF << std::endl;
	return (0);
}