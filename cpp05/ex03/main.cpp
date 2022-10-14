#include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
/* 	ShrubberyCreationForm form("testForm");
	Bureaucrat bureaucrat("testBureaucrat", 1);
	std::cout << "Form: " << form << std::endl;
	std::cout << "Bureaucrat: " << bureaucrat << std::endl;
	try{
//		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "besigned: " << form.getIsSigned() << std::endl;
	return (0); */
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat bureaucrat("testBureaucrat", 1);

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	try{
		bureaucrat.signForm(*rrf);
		bureaucrat.executeForm(*rrf);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
