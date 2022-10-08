#include "Cure.hpp"

// Constructors
Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria::AMateria(copy)
{
	*this = copy;
	_type = "cure";
}


// Destructor
Cure::~Cure()
{
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void)assign;
	_type = "cure";
	return *this;
}


// Getters / Setters
const std::string & Cure::get_type() const
{
	return _type;
}


// Functions
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	Cure *dolly = new Cure(*this);
	return (dolly);
}
