#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", false, 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("RobotomyRequestForm", copy.getIsSigned(), 72, 45)
{
	_target = copy.getTarget();
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", false, 72, 45)
{
	_target = target;
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	_target = assign.getTarget();
	return *this;
}


// Getters / Setters
std::string const RobotomyRequestForm::getTarget() const
{
	return _target;
}



// Functions
bool RobotomyRequestForm::beExecuted(Bureaucrat *bureaucrat)
{
	if (bureaucrat->getGrade() <= getExecMinGrade() && getIsSigned())
	{
		std::cout << "*brbrbrbrbrbrbbrbrbrbrbrrrrrrrrrrrrrrrrrrr*" << std::endl;
		srand(time(NULL));
		if ((rand() % 2))
			std::cout << _target << " has been robotomized successfully" <<std::endl;
		else
			std::cout << "robotomization failed" << std::endl;
		return true;
	}
	else if (bureaucrat->getGrade() > getExecMinGrade())
		throw(GradeTooLowToExecException());
	else
		throw(UnsignedFormException());
	return false;
}


// Exceptions
const char * RobotomyRequestForm::GradeTooLowToExecException::what() const throw()
{
	return "RobotomyRequestForm::GradeTooLowToExecException:\n\t\t Bureaucrat of too low grade tried to execute";
}
const char * RobotomyRequestForm::UnsignedFormException::what() const throw()
{
	return "RobotomyRequestForm::UnsignedFormException: cannot execute unsigned form, please sign it beforehand";
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const RobotomyRequestForm &object)
{
	stream	<< "" << object.getName() << "\nissigned: " << object.getIsSigned() <<
			"\ngrade required to sign: " << object.getSignMinGrade() <<
			"\ngrade required to execute: " << object.getExecMinGrade() <<
			"\ntarget: " << object.getTarget() << std::endl;
	return stream;
}
