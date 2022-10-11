#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavvy("scavvy");
	ClapTrap clappy;
	ScavTrap clappy2;

	clappy.attack("targget dummy");
	ScavTrap copyscav(scavvy);
	// ScavTrap dolly(scavvy);
	// ScavTrap dolly2 = dolly;
//	ClapTrap clappy = scavvy;

//	ClapTrap clappy("clappy");

	scavvy.attack("horsee");
	scavvy.takeDamage(99);
	scavvy.guardGate();
//	clappy.attack("tree");
	return (0);
}
