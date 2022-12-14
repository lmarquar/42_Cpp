#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "../Character/ICharacter.hpp"

class AMateria
{
	public:
		// Constructors
		AMateria();
		AMateria(AMateria const &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		
		// Getters / Setters
		std::string const & get_type() const;

		// Functions
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
	protected:
		std::string _type;

};

#endif
