#include "Zombie.hpp"

// VariableInit
std::string	Zombie::_defnames[4] = {"Bogdan", "Murat", "Erd", "Alokaka"};

// Constructors
Zombie::Zombie()
{
	int	i;

	i = 0;
	while (!_defnames[i].empty())
		i++;
	std::srand(time(NULL));
	_name = _defnames[rand() % i];
}

Zombie::Zombie(const Zombie &copy)
{
	_name = copy.getName();
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->getName() << " has been terminated" << std::endl;
}

// Operators
Zombie &Zombie::operator=(const Zombie &assign)
{
	_name = assign.getName();
	return *this;
}

// Getters / Setters
std::string	Zombie::getName() const
{
	return _name;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

// Functions
void Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*z;

	z  = new Zombie(name);
	return (z);
}

void	Zombie::randomChump(std::string name)
{
	Zombie	z(name);

	z.announce();
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*z_horde;

	z_horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		z_horde[i].setName(name);
	return (z_horde);
}