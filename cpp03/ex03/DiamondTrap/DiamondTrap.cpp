#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap()
{
	_name = "";
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
	std::cout << "Default DiamondTrap " << _name << " got constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap::ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << _name << " got constructed" << std::endl;
}

// Getters and Setters
std::string DiamondTrap::getName() const
{
	return _name;
}
void DiamondTrap::setName(std::string name)
{
	ClapTrap::setName(name + "_clap_name");
	_name = name;
}

int DiamondTrap::getHitPoints() const
{
	return FragTrap::getHitPoints();
}

void DiamondTrap::setHitPoints(int hitPoints)
{
	FragTrap::setHitPoints(hitPoints);
	_hitPoints = FragTrap::getHitPoints();
}

int DiamondTrap::getEnergyPoints() const
{
	return ScavTrap::getEnergyPoints();
}
void DiamondTrap::setEnergyPoints(int energyPoints)
{
	ScavTrap::setEnergyPoints(energyPoints);
	_energyPoints = ScavTrap::getEnergyPoints();
}

int DiamondTrap::getAttackDamage() const
{
	return FragTrap::getAttackDamage();
}
void DiamondTrap::setAttackDamage(int attackDamage)
{
	FragTrap::setAttackDamage(attackDamage);
	_attackDamage = FragTrap::getAttackDamage();
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " got destructed" << std::endl;
}


// Functions
void	DiamondTrap::whoAmI()
{
	if (_energyPoints <= 0)
		return ;
	ScavTrap::setEnergyPoints(--_energyPoints);
	std::cout << "this name: " << _name << std::endl;
	std::cout << "clap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	_energyPoints = ScavTrap::getEnergyPoints();
}
