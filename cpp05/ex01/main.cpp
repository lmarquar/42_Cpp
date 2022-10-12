#include "Form.hpp"

int main()
{
	Form form("testForm", 0, 2, 1);
	Bureaucrat bureaucrat("testBureaucrat", 3);

	try{
		form.beSigned(bureaucrat);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "besigned: " << form.getIssigned() << std::endl;
	return (0);
}