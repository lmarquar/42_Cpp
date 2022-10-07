#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal::Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	_brain = new Brain(*(copy.getBrain()));
}

Dog::Dog(Brain* brain)
{
	std::cout << "\e[0;33mConstructor called of Dog\e[0m" << std::endl;
	_type = "Dog";
	_brain = brain;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete _brain;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	_brain = new Brain(*(assign.getBrain()));
	return (*this);
}


// Getters and setters
Brain* Dog::getBrain() const
{
	return _brain;
}


// Functions
void	Dog::makeSound() const
{
	std::cout << "Wuff" << std::endl;
}
