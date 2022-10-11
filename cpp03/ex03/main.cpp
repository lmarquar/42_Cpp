#include "DiamondTrap/DiamondTrap.hpp"

int main()
{
	DiamondTrap	dimmy("dimmy");

	dimmy.attack("target");
	std::cout << dimmy.getHitPoints();
	dimmy.takeDamage(10);
	std::cout << dimmy.getHitPoints();
	std::cout << "energyPoints: " << dimmy.getEnergyPoints() << std::endl;
	dimmy.whoAmI();
	std::cout << "energyPoints: " << dimmy.getEnergyPoints() << std::endl;
	dimmy.setName("leon");
	std::cout << dimmy.getName() << std::endl;
	return (0);
}
