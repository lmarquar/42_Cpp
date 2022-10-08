#include "Ice.hpp"

// Constructors
Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria::AMateria(copy)
{
	*this = copy;
	_type = "ice";
}


// Destructor
Ice::~Ice()
{
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	_type = "ice";
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const
{
	Ice *dolly = new Ice(*this);
	return (dolly);
}
