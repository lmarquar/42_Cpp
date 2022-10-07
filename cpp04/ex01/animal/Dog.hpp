#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "../brain/Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		Dog(Brain *Brain);
		
		// Destructor
		~Dog();

		// Operators
		Dog & operator=(const Dog &assign);
		
		// Getters and setters
		Brain* getBrain() const;

		// Functions
		void	makeSound() const;
		
	private:
		Brain* _brain;
};

#endif
