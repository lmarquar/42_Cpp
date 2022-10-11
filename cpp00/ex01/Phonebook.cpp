/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:07:32 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/23 16:23:31 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "hello this is your Phonebook" << std::endl;
	std::cout << "there is three initial commands you can enter:" << std::endl;
	std::cout << "ADD to add a new contact to your phonebook" << std::endl;
	std::cout << "SEARCH to search it for one Contact" << std::endl;
	std::cout << "EXIT to exit" << std::endl;
	i = 0;
}

int	Phonebook::add(Contact contact)
{
	contacts[i] = contact;
	i++;
	if (i > 7)
		i = 0;
	return (0);
}

int	Phonebook::search()
{
	int					x;
	int					w;
	std::string			s;
	std::stringstream	ss;

	x = 0;
	w = 10;
	while (x < 8)
	{
		std::cout << "|" << std::right << std::setw(w) << x + 1;
		contacts[x].show(w);
		x++;
	}
	std::cout << "type in index of Contact you want to examine: ";
	std::getline(std::cin, s);
	while (s.length() != 1 || (s[0] < '1' || s[0] > '8'))
	{
		std::cout << "wrong input, has to be a number between 1 and 8, try again" << std::endl;
		std::getline(std::cin, s);
	}
	ss << s;
	ss >> x;
	if (x < 1 || x > 8)
	{
		std::cout << "index out of bounds(has to be 1-8): abort" << std::endl;
		return (1);
	}
	std::cout << "Contact " << x << ":" << std::endl;
	x--;
	contacts[x].show_full();
	return (0);
}

Phonebook::~Phonebook(void)
{
}

Contact::Contact(void)
{
}

std::string	Contact::fill_string(std::string message)
{
	std::string	res;
	int			i;

	while (res.length() < 1)
	{
		i = 0;
		std::cout << message;
		std::getline(std::cin, res);
		if (res.length() < 1)
		{
			std::cout << "field cannot be left empty" << std::endl;
			continue;
		}
		while (res[i] >= 32 && res[i] <= 126)
			i++;
		if (res[i])
		{
			std::cout << "illegal character found(" << res[i] << "). possible are Ascii values 32-126, try again" << std::endl;
			res.clear();
		}
	}
	return (res);
}

int	Contact::fill()
{
	this->first_name = fill_string("type first name: ");
	this->last_name = fill_string("type last name: ");
	this->nickname = fill_string("type nickname: ");
	this->number = fill_string("type number: ");
	this->darkest_secret = fill_string("type the persons darkest secret: ");
	return (0);
}

std::string	Contact::truncate(std::string s, int width)
{
	if ((int)s.length() > width)
		return s.substr(0, width - 1) + ".";
	return s;
}

int	Contact::show(int w)
{
	std::cout << "|" << std::right << std::setw(w) << truncate(this->first_name, w);
	std::cout << "|" << std::right << std::setw(w) << truncate(this->last_name, w);
	std::cout << "|" << std::right << std::setw(w) << truncate(this->nickname, w) << "|" << std::endl;
	return (0);
}

void	Contact::show_full()
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "number: " << this->number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

Contact::~Contact(void)
{
}