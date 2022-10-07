#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	_type = "Dog";
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// Functions
void	Dog::makeSound() const
{
	std::cout << "Wuff Wuff" << std::endl;
}
