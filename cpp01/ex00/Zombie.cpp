/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:14:46 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/29 16:18:42 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructors
Zombie::Zombie()
{
	_name = "Bogdan";
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
std::string Zombie::getName() const
{
	return _name;
}

// Functions
void Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::newZombie(std::string name)
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
