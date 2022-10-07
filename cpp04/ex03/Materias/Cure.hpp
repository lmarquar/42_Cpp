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
		Cure(std::string const &type);
		
		// Destructor
		~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);
		
		// Getters / Setters
		std::string const & get_type() const;

		// Functions
		virtual Cure* clone() const = 0;
		void use(ICharacter& target);
};

#endif