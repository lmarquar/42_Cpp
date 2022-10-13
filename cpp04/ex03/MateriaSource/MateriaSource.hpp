#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "../Materias/Cure.hpp"
# include "../Materias/Ice.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		
		// Destructor
		~MateriaSource();
		
		// Operators
		MateriaSource & operator=(const MateriaSource &assign);

		// Getters
        AMateria *getMateria(int i) const;

		// Function
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
	private:
		AMateria *_amaterias[4];
};

#endif
