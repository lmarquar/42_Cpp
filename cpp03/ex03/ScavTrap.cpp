#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " got constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " got constructed" << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " got destructed" << std::endl;
}


// Functions
void ScavTrap::guardGate()
{
	if (getEnergyPoints() <= 0 || getHitPoints() <= 0)
		return ;
	if (getHitPoints() == 1)
		std::cout << "ScavTrap " << getName() << " keeps the gate with his last breath of air" << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}