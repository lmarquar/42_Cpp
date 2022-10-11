#include "Weapon.hpp"

// Constructors
Weapon::Weapon()
{
	_type = "";
}

Weapon::Weapon(const Weapon &copy)
{
	_type = copy.getType();
}

Weapon::Weapon(std::string type)
{
	_type = type;
}


// Destructor
Weapon::~Weapon()
{
}


// Operators
/* Weapon & Weapon::operator=(const Weapon &assign)
{
	std::cout << "= Weapon";
	_type = *(assign.getType());
	return *this;
} */

// Getters / Setters
std::string Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}
