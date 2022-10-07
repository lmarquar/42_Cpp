#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		
		// Destructor
		~WrongCat();
		

		// Functions
		void	makeSound() const;
		
		
	protected:
		std::string _type;
		
};

#endif
