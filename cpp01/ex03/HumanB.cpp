#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = new Weapon("");
}

HumanB::~HumanB()
{}

void HumanB::setWeapon(Weapon &weapon)
{
	delete _weapon;
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their ";
	if (_weapon->getType().empty())
		std::cout << "bare hands";
	else
		std::cout << _weapon->getType();
	std::cout << std::endl;
}