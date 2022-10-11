#include "Harl.hpp"

int main()
{
	Harl	harl;

	harl.complain("WARNING");
	std::cout << harl.getWarning() << std::endl;
	harl.complain("INFO");
	std::cout << harl.getInfo() << std::endl;
	harl.complain("DEBUG");
	std::cout << harl.getDebug() << std::endl;
	harl.complain("hello");
}