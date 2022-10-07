#include "Ice.hpp"

const std::string AMateria::_type = "ice";

// Constructors
Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(std::string const &type)
{
	std::cout << "\e[0;33mFields Constructor called of Ice\e[0m" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	return *this;
}


// Getters / Setters
const std::string & Ice::get_type() const
{
	return _type;
}


// Functions
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *";
}
