#include "AMateria.hpp"

std::string AMateria::_type = "amateria";

// Constructors
AMateria::AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of " << copy.get_type() << "\e[0m" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "\e[0;33mFields Constructor called of " << type << "\e[0m" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	std::cout << "\e[0;33m= operator called of " << assign.get_type() << "\e[0m" << std::endl;
	return *this;
}


// Getters / Setters
const std::string & AMateria::get_type() const
{
	return _type;
}


// Functions
void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an AMateria bolt at " << target.getName() << " *";
}
