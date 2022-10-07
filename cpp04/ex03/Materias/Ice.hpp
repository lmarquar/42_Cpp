#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
 #include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		static std::string _type;
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
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
