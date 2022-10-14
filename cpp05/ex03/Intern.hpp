#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		
		// Destructor
		~Intern();
		
		// Operators
		Intern & operator=(const Intern &assign);

		// Functions
		Form* makeForm(std::string formType, std::string target);
		Form* createShrubbery();
		Form* createPresidential();
		Form* createRobotomy();
		
	private:
		Form* (Intern::*createForm[3])();
		std::string formTypes[3];
		std::string _target;
		
};

#endif