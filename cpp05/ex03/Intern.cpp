#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	createForm[0] = &Intern::createShrubbery;
	createForm[1] = &Intern::createRobotomy;
	createForm[2] = &Intern::createPresidential;

	formTypes[0] = "shrubbery creation";
	formTypes[1] = "robotomy request";
	formTypes[2] = "presidential request";
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}


// Functions
Form* Intern::makeForm(std::string formType, std::string target)
{

	_target = target;
	for (int i = 0; i < 3; i++)
	{
		if (formType == formTypes[i])
		{
			std::cout << "Intern creates " << formType << " Form" << std::endl;
			return (this->*(createForm[i]))();
		}
	}
	std::cout << "Intern::makeForm: formType not found, returning NULL" << std::endl;
	return (NULL);
}

Form* Intern::createShrubbery()
{
	return (new ShrubberyCreationForm(_target));
}

Form* Intern::createRobotomy()
{
	return (new RobotomyRequestForm(_target));
}

Form* Intern::createPresidential()
{
	return (new PresidentialPardonForm(_target));
}