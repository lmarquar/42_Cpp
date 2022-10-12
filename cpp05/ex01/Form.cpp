#include "Form.hpp"

// Constructors
Form::Form() : _name(""), _signMinGrade(1), _execMinGrade(1)
{
	_issigned = 0;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _signMinGrade(copy.getSignMinGrade()), _execMinGrade(copy.getExecMinGrade())
{
	_issigned = copy.getIssigned();
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string const name, bool issigned, int const signMinGrade, int const execMinGrade) :
	_name(name), _signMinGrade(signMinGrade), _execMinGrade(execMinGrade)
{
	_issigned = issigned;
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	_issigned = assign.getIssigned();
	return *this;
}


// Getters / Setters
std::string const Form::getName() const
{
	return _name;
}
bool Form::getIssigned() const
{
	return _issigned;
}
void Form::setIssigned(bool issigned)
{
	_issigned = issigned;
}
int Form::getSignMinGrade() const
{
	return _signMinGrade;
}
int Form::getExecMinGrade() const
{
	return _execMinGrade;
}


// Functions
bool Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= _signMinGrade)
	{
		_issigned = true;
		return true;
	}
	else
	{
		throw(GradeTooLowException());
		return false;
	}
}


// Exceptions
const char * Form::GradeTooHighException::what() const throw()
{
	return "your maximal grade to sign the Form is too high";
}
const char * Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException: your Bureaucrats grade is too low to sign the Form";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream	<< "" << object.getName() << "\nissigned: " << object.getIssigned() <<
			"\ngrade required to sign: " << object.getSignMinGrade() <<
			"\ngrade required to execute: " << object.getExecMinGrade() << std::endl;
	return stream;
}
