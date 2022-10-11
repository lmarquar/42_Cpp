#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(std::string name);
//		ScavTrap(const ScavTrap& other);
		
		// Destructor
		~ScavTrap();


		// Funcs
		void guardGate();
		void attack(const std::string& target);
};

#endif
