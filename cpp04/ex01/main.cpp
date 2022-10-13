#include "animal/Dog.hpp"
#include "animal/Cat.hpp"
#include "wronganimal/WrongCat.hpp"
#include "brain/Brain.hpp"

int main()
{
	Brain *brain = new Brain();
	Cat catty(brain);
	std::cout << "Proof of deep copy" << std::endl;
	brain->setIdea(0, "hmm i should do more sport");
	std::cout << "Cat thought(0): " << catty.getBrain()->getIdea(0) << std::endl;
	Cat cattyclone = catty;
	cattyclone.getBrain()->setIdea(0, "find a sports group");
	std::cout << "Cat_clone overwritten thought(0): " << cattyclone.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat thought(0): " << catty.getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat type: " << catty.getType() << std::endl;
	std::cout << "Cat_clone type: " << cattyclone.getType() << std::endl;

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
