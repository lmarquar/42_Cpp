#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string const target);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);
		
		// Getters / Setters
		std::string const getTarget() const;

		// Functions
		bool beExecuted(Bureaucrat *bureaucrat);
		
		// Exceptions
		class GradeTooLowToExecException : public std::exception {
			virtual const char* what() const throw();
		};
		class UnsignedFormException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::string _target;
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const ShrubberyCreationForm &object);

#include "../Bureaucrat.hpp"

#endif
