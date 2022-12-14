#include "Character.hpp"

// Constructors
Character::Character()
{
	_name = "";
	for(int i = 0; i < 4; i++)
		_amaterias[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	for(int i = 0; i < 4; i++)
		_amaterias[i] = NULL;
}

Character::Character(const Character &copy)
{
	for(int i = 0; i < 4; i++)
		_amaterias[i] = copy.getAmateria(i);
	_name = copy.getName();
}


// Destructor
Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (_amaterias[i] != NULL)
			delete _amaterias[i];
	}
}


// Operators
Character & Character::operator=(const Character &assign)
{
	for(int i = 0; i < 4; i++)
		_amaterias[i] = assign.getAmateria(i);
	_name = assign.getName();
	return *this;
}


// Getters / Setters
AMateria* Character::getAmateria(int pos) const
{
	if (pos < 0 || pos > 3)
		return NULL;
	return _amaterias[pos];
}

void Character::setAmateria(AMateria* amateria, int pos)
{
	if (_amaterias[pos])
		delete _amaterias[pos];
	_amaterias[pos] = amateria;
}

std::string const & Character::getName() const
{
	return _name;
}
void Character::setName(std::string name)
{
	_name = name;
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	_amaterias[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (out_of_bounds(idx))
		return ;
	_amaterias[idx]->use(target);
}

bool Character::out_of_bounds(int idx)
{
	if (idx < 0 || idx > 4)
		return (true);
	if (!_amaterias[idx])
		return (true);
	return (false);
}
