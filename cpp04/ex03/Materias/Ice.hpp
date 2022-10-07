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
		Ice(std::string const &type);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
		// Getters / Setters
		std::string const & get_type() const;

		// Functions
		virtual Ice* clone() const = 0;
		void use(ICharacter& target);
};

#endif
