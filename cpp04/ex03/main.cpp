#include "Character/Character.hpp"
#include "Materias/Ice.hpp"
#include "Materias/Cure.hpp"

int main()
{
	Character character;
	AMateria *ice = new Ice();

	character.setAmateria(ice, 0);
}
