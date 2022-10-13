#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string const name, bool issigned, int const signMinGrade, int const execMinGrade);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string const getName() const;
		bool getIssigned() const;
		void setIssigned(bool issigned);
		int getSignMinGrade() const;
		int getExecMinGrade() const;

		// Functions
		bool beSigned(Bureaucrat *bureaucrat);
		
		// Exceptions
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		std::string const _name;
		bool _issigned;
		int const _signMinGrade;
		int const _execMinGrade;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif
