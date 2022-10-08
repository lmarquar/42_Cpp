#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "../Materias/AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// Constructors
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character(AMateria *amaterias[4], std::string name);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		
		// Getters / Setters
		AMateria *getAmateria(int pos) const;
		void setAmateria(AMateria *amateria, int pos);
		std::string const & getName() const;
		void setName(std::string name);

		// Functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		bool out_of_bounds(int idx);
		
	private:
		AMateria *_amaterias[4];
		std::string _name;
		
};

#endif
