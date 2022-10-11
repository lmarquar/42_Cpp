#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Zombie
{
public:
	// Constructors
	Zombie();
	Zombie(const Zombie &copy);
	Zombie(std::string name);

	// Destructor
	~Zombie();

	// Operators
	Zombie &operator=(const Zombie &assign);

	// Getters / Setters
	std::string getName() const;
	void setName(std::string name);

	// Functions
	void	announce(void);
	Zombie*	newZombie(std::string name);
	void	randomChump( std::string name );
	Zombie*	zombieHorde( int N, std::string name );

private:
	static std::string	_defnames[4];

	std::string			_name;
};

#endif