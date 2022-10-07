#include "Cure.hpp"

std::string Cure::_type = "Cure";

// Constructors
Cure::Cure()
{
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(std::string const &type)
{
	
	std::cout << "\e[0;33mFields Constructor called of " << type << "\e[0m" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	std::cout << "\e[0;33m= operator called of " << assign.get_type() << "\e[0m" << std::endl;
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
