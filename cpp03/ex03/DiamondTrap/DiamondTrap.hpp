#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "../FragTrap.hpp"
# include "../ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		// Constructors
		DiamondTrap();
		DiamondTrap(std::string name);
		
		// Destructor
		~DiamondTrap();

		// Getters and Setters
		std::string getName() const;
		void setName(std::string name);
		int getHitPoints() const;
		void setHitPoints(int hitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int energyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int attackDamage);


		// Funcs
		void	whoAmI();
		void attack(const std::string& target);

	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		std::string	_cpName;

};

#endif
