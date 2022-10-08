#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
 #include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		
		// Getters / Setters
		std::string const & get_type() const;

		// Functions
		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
