#include "AMateria.hpp"

const std::string AMateria::_type = "amateria";

// Constructors
AMateria::AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "\e[0;33mFields Constructor called of AMateria\e[0m" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	return *this;
}


// Getters / Setters
const std::string & AMateria::get_type() const
{
	return _type;
}
