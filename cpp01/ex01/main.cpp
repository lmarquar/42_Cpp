/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:14:52 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/29 16:15:55 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"

int main(void)
{
	Zombie	zombie1("tome");
	Zombie	zombie2;
	Zombie	*zombie3;
	Zombie	*zombie4;

	zombie3 = zombie2.newZombie("greenlord");
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	zombie3->randomChump("randomchump");
	zombie4 = zombie3->zombieHorde(5, "hordezombie");
	for (int i = 0; i < 5; i++)
		zombie4[i].announce();
	delete zombie3;
	delete[] zombie4;
	return (0);
}