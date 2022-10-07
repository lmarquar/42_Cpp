#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		
		// Destructor
		~Dog();
		

		// Functions
		void	makeSound() const;
		
		
	protected:
		std::string _type;
		
};

#endif
