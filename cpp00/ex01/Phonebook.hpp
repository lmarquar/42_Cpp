/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquar <lmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:07:38 by lmarquar          #+#    #+#             */
/*   Updated: 2022/09/23 16:23:41 by lmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	darkest_secret;
	public:
		Contact();
		std::string	truncate(std::string s, int width);
		std::string	fill_string(std::string message);
		int			fill();
		int			show(int w);
		void		show_full();
		~Contact();
};

class Phonebook
{
	private:
		Contact	contacts[8];
		int		i;
	public:
		Phonebook();
		int	add(Contact contact);
		int	search();
		~Phonebook();
};

#endif