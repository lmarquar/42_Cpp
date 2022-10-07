#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal::Animal(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
	_brain = new Brain(*(copy.getBrain()));
}

Cat::Cat(Brain* brain)
{
	std::cout << "\e[0;33mConstructor called of Cat\e[0m" << std::endl;
	_type = "Cat";
	_brain = brain;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete _brain;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	_brain = new Brain(*(assign.getBrain()));
	return (*this);
}


// Getters and setters
Brain* Cat::getBrain() const
{
	return _brain;
}


// Functions
void	Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
