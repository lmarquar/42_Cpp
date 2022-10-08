#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
	_type = "AMateria";
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	_type = "AMateria";
}


// Destructor
AMateria::~AMateria()
{
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void)assign;
	_type = "AMateria";
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
