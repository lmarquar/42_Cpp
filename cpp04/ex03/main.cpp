#include "Character/Character.hpp"
#include "Materias/Ice.hpp"
#include "Materias/Cure.hpp"
#include "MateriaSource/MateriaSource.hpp"

/* int main()
{
	Character character;
	AMateria *ice = new Ice();
	Cure *cure = new Cure();
	AMateria *cure_dub;

	character.setAmateria(ice, 0);
	cure_dub = cure;
	character.equip(cure_dub);
	return (0);
} */
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	 delete me;
	 delete src;
	return 0;
}
