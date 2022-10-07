#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "../brain/Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);
		Cat(Brain *Brain);
		
		// Destructor
		~Cat();

		// Operators
		Cat & operator=(const Cat &assign);
		
		// Getters and setters
		Brain* getBrain() const;

		// Functions
		void	makeSound() const;
		
	private:
		Brain* _brain;
};

#endif
