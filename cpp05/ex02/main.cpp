#include "Bureaucrat.hpp"

int main()
{
/* 	Form form("testForm", 0, 1, 1);
	Bureaucrat bureaucrat("testBureaucrat", 2);

	try{
		bureaucrat.signForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "besigned: " << form.getIssigned() << std::endl;
	return (0); */

	// Error checks
	Form form("testForm", 0, 1, 1);
	Bureaucrat bureaucrat("testBureaucrat", 2);
	std::cout << "Form: " << form << std::endl;
	std::cout << "Bureaucrat: " << bureaucrat << std::endl;
	try{
		bureaucrat.signForm(form);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "besigned: " << form.getIssigned() << std::endl;
	return (0);
}
