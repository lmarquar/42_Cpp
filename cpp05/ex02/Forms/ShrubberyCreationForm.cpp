#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", false, 145, 137)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form("ShrubberyCreationForm", copy.getIsSigned(), 145, 137)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	_target = assign.getTarget();
	return *this;
}


// Getters / Setters
std::string const ShrubberyCreationForm::getTarget() const
{
	return _target;
}



// Functions
bool ShrubberyCreationForm::beExecuted(Bureaucrat *bureaucrat)
{
	if (bureaucrat->getGrade() <= getExecMinGrade() && getIsSigned())
	{
		int fd;
		fd = open(getTarget() + "_shrubbery", O_RDWR)
		return true;
	}
	else if (bureaucrat->getGrade() <= getExecMinGrade())
		throw(GradeTooLowException());
	else
		throw(UnsignedFormException());
	return false;
}


// Exceptions
const char * ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return "ShrubberyCreationForm::GradeTooHighException: the entered grade is too high";
}
const char * ShrubberyCreationForm::UnsignedFormException::what() const throw()
{
	return "ShrubberyCreationForm::UnsignedFormException: cannot execute unsigned form, please sign it beforehand";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const ShrubberyCreationForm &object)
{
	stream	<< "" << object.getName() << "\nissigned: " << object.getIsSigned() <<
			"\ngrade required to sign: " << object.getSignMinGrade() <<
			"\ngrade required to execute: " << object.getExecMinGrade() <<
			"\ntarget: " << object.getTarget() << std::endl;
	return stream;
}
