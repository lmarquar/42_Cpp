/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:23:22 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/23 16:23:23 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook		phonebook;
	Contact			contact;
	std::string		arg;

	while (1)
	{
		std::getline(std::cin, arg);
		if (arg == "ADD")
		{
			contact.fill();
			phonebook.add(contact);
		}
		else if (arg == "SEARCH")
			phonebook.search();
		else if (arg == "EXIT")
			exit(0);
		else
			std::cout << "INVALID INPUT (has to be ADD, SEARCH or EXIT), try again" << std::endl;
	}
	return (0);
}