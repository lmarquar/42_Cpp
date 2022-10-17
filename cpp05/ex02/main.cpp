#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm form("testForm");
	Bureaucrat bureaucrat("testBureaucrat", 1);
	std::cout << "Form: " << form << std::endl;
	std::cout << "Bureaucrat: " << bureaucrat << std::endl;
	try{
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "besigned: " << form.getIsSigned() << std::endl;
	return (0);
}
