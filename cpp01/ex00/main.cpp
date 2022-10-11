/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:14:26 by lmarquar          #+#    #+#             */
/*   Updated: 2022/10/01 08:41:54 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie.hpp"
#include	<cstdlib>

int main(void)
{
	Zombie	zombie1("tome");
	Zombie	zombie2;
	Zombie	*zombie3;

	zombie3 = zombie2.newZombie("greenlord");
	zombie1.announce();
	zombie2.announce();
	zombie3->announce();
	zombie3->randomChump("randomchump");
	delete zombie3;
	return (0);
}