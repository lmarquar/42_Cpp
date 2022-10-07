#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	(void) copy;
}


// Destructor
MateriaSource::~MateriaSource()
{
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (_amaterias[i] != NULL)
			delete _amaterias[i];
	}
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	(void) assign;
	return *this;
}


// Functions
void MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < 4; i++)
		{
		if (!_amaterias[i])
		{
			_amaterias[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_amaterias[i]->get_type() == type)
			return (_amaterias[i]);
	}
	return (NULL);
}
