#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		
		// Destructor
		~Cat();
		

		// Functions
		void	makeSound() const;
		
		
	protected:
		std::string _type;
		
};

#endif
