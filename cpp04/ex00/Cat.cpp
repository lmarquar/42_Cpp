#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	_type = "Cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal()
{
	_type = copy.getType();
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}



// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	return *this;
}


// Functions
void	Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}
