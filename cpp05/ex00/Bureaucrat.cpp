#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
	_grade = 1;
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	_grade = 1;
	std::cout << "\e[0;33mConstructor (with name) called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
	_grade = copy.getGrade();
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) :_name("Bureaucrat")
{
	_grade = 1;
	if (grade > 150)
		throw (GradeTooLowException());
	else if (grade < 1)
		throw (GradeTooHighException());
	_grade = grade;
	std::cout << "\e[0;33mFields Constructor (only grade) called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	_grade = 1;
	if (grade > 150)
		throw (GradeTooLowException());
	else if (grade < 1)
		throw (GradeTooHighException());
	_grade = grade;
	std::cout << "\e[0;33mConstructor (2 value) called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}


// Getters / Setters
std::string const Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	_grade = 1;
	if (grade > 150)
		throw (GradeTooLowException());
	else if (grade < 1)
		throw (GradeTooHighException());
	_grade = grade;
}


// Functions
int Bureaucrat::incrementGrade()
{
	int tmp;

	tmp = _grade - 1;
	if (tmp < 1)
	{
		throw(GradeTooHighException());
		return (0);
	}
	else
		_grade = tmp;
	return (_grade);
}

int Bureaucrat::decrementGrade()
{
	int tmp;

	tmp = _grade + 1;
	if (tmp > 150)
	{
		throw(GradeTooLowException());
		return (0);
	}
	else
		_grade = tmp;
	return (_grade);
}

// Exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException: grade cannot be higher than 1";
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException: grade cannot be lower than 150";
}

// Operators
std::ostream& operator<<(std::ostream& os, Bureaucrat& bc)
{
	os << bc.getName() << ", bureaucrat grade: " << bc.getGrade() << std::endl;
	return (os);
}