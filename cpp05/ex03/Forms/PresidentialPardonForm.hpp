#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		// Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string const target);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		
		// Getters / Setters
		std::string const getTarget() const;

		// Functions
		bool execute(Bureaucrat const & executor) const;
		
		// Exceptions
		class UnsignedFormException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowToExecException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::string _target;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const PresidentialPardonForm &object);

#include "../Bureaucrat.hpp"

#endif
