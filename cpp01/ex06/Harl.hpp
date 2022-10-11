#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <map>

class Harl
{
	public:
		// Constructors
		Harl();
		Harl(const Harl &copy);
		
		// Destructor
		~Harl();
		
		// Operators
		Harl & operator=(const Harl &assign);
		
		// Getters / Setters
		std::string getDebug() const;
		std::string getInfo() const;
		std::string getWarning() const;
		std::string getError() const;

		// Functions
		void	complain(std::string level);

	private:
		std::string _debug;
		std::string _info;
		std::string _warning;
		std::string _error;
		
};

#endif