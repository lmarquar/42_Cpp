#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " got constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << "ClapTrap " << _name << " got constructed (by copy)" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " got constructed" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " got destructed" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}


// Getters / Setters
std::string ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setName(std::string name)
{
	_name = name;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
void ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}


// Functions
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return ;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > (long)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _name << " takes " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_energyPoints--;
	_hitPoints += amount;
	std::cout << _name << " gets healed by " << amount << " points" << std::endl;
}
