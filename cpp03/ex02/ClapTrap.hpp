#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name);
		
		// Destructor
		~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);
		int getHitPoints() const;
		void setHitPoints(int hitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int energyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int attackDamage);

		// Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
		
};

#endif
