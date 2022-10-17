#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		// Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string const target);
		
		// Destructor
		~RobotomyRequestForm();
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		
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
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object);

#include "../Bureaucrat.hpp"

#endif
