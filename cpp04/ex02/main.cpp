#include "animal/Dog.hpp"
#include "animal/Cat.hpp"
#include "wronganimal/WrongCat.hpp"
#include "brain/Brain.hpp"

int main()
{
	WrongAnimal	wr;
	WrongCat	wc;
	wr.makeSound();
	wc.makeSound();

	Brain *brain = new Brain();
	Cat catty(brain);
	brain->setIdea(0, "find a girlfriend");
	std::cout << catty.getBrain()->getIdea(0) << std::endl;
	Cat cattyclone = catty;
	cattyclone.getBrain()->setIdea(0, "find a way to get back to kickboxing");
	std::cout << cattyclone.getBrain()->getIdea(0) << std::endl;
	std::cout << catty.getBrain()->getIdea(0) << std::endl;

	Animal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Cat;
	for (int i = 5; i < 10; i++)
	 	animals[i] = new Dog;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	Animal *animal;
	animal = new Dog;
	delete animal;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}
