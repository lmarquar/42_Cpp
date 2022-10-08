#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
 #include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
		// Getters / Setters
		std::string const & get_type() const;

		// Functions
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
