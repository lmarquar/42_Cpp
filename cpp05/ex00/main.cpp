#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bc("leon", 150);
		std::cout << bc << std::endl;
//		bc.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(...)
	{
		std::cerr << "unknown exception\n";
	}
	//std::cout << bc.getGrade() << std::endl;
	
}