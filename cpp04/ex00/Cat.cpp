#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	_type = "Cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}

// Functions
void	Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
