#include "ClapTrap.hpp"

int main()
{
	ClapTrap trappy("trappy");

	trappy.attack("bread");
	trappy.beRepaired(10);
	trappy.takeDamage(20);
	trappy.attack("don't attack me i'm just a fly");
	return (0);
}
