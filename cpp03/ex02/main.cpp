#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// FragTrap fraggy("fraggy");
	// ScavTrap dolly(scavvy);
	// ScavTrap dolly2 = dolly;

	// ClapTrap clappy("clappy");

	// fraggy.attack("horsee");
	// fraggy.takeDamage(100);
	// fraggy.highFivesGuys();
	// clappy.attack("tree");
	// }
	// std::cout << std::endl << std::endl;
	{
		FragTrap fraggy("fraggy");
		fraggy.attack("bus");
		fraggy.highFivesGuys();
		fraggy.beRepaired(20);
		std::cout << "Damage " << fraggy.getAttackDamage() << " hitPoints " << fraggy.getHitPoints() << " Energy " << fraggy.getEnergyPoints() << std::endl;
		fraggy.takeDamage(100);
		fraggy.highFivesGuys();
	}
	return (0);
}
