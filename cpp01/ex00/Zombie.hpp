/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:14:48 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/29 16:14:50 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

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

	// Functions
	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump( std::string name );

private:
	std::string _name;
};

#endif