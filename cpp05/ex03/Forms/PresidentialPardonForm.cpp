#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", false, 25, 5)
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PresidentialPardonForm", copy.getIsSigned(), 25, 5)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", false, 25, 5)
{
	_target = target;
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	_target = assign.getTarget();
	return *this;
}


// Getters / Setters
std::string const PresidentialPardonForm::getTarget() const
{
	return _target;
}



// Functions
bool PresidentialPardonForm::beExecuted(Bureaucrat *bureaucrat)
{
	if (bureaucrat->getGrade() <= getExecMinGrade() && getIsSigned())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return true;
	}
	else if (bureaucrat->getGrade() > getExecMinGrade())
		throw(GradeTooLowToExecException());
	else
		throw(UnsignedFormException());
	return false;
}


// Exceptions
const char * PresidentialPardonForm::GradeTooLowToExecException::what() const throw()
{
	return "PresidentialPardonForm::GradeTooLowToExecException:\n\t\t Bureaucrat of too low grade tried to execute";
}
const char * PresidentialPardonForm::UnsignedFormException::what() const throw()
{
	return "PresidentialPardonForm::UnsignedFormException: cannot execute unsigned form, please sign it beforehand";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const PresidentialPardonForm &object)
{
	stream	<< "" << object.getName() << "\nissigned: " << object.getIsSigned() <<
			"\ngrade required to sign: " << object.getSignMinGrade() <<
			"\ngrade required to execute: " << object.getExecMinGrade() <<
			"\ntarget: " << object.getTarget() << std::endl;
	return stream;
}
