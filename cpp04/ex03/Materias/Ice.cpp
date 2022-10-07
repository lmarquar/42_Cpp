#include "Ice.hpp"

std::string Ice::_type = "ice";

// Constructors
Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(std::string const &type)
{
	
	std::cout << "\e[0;33mFields Constructor called of " << type << "\e[0m" << std::endl;
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	std::cout << "\e[0;33m= operator called of " << assign.get_type() << "\e[0m" << std::endl;
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}

Ice* Ice::clone() const
{
	Ice *dolly = new Ice(*this);
	return (dolly);
}
