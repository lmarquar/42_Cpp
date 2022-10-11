#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	_hitPoints = 100;
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " got constructed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " got constructed" << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " got destructed" << std::endl;
}


// Functions
void FragTrap::highFivesGuys()
{
	if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
		return ;
	if (getHitPoints() == 1)
		std::cout << "FragTrap " << getName() << " requests a high five with his last breath of air" << std::endl;
	else
		std::cout << "FragTrap " << getName() << " requests a high five" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return ;
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}