#include "Harl.hpp"

// Constructors
Harl::Harl()
{
	_debug = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	_info = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	_warning = "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	_error = "This is unacceptable! I want to speak to the manager now.";
}

Harl::Harl(const Harl &copy)
{
	_debug = copy.getDebug();
	_info = copy.getInfo();
	_warning = copy.getWarning();
	_error = copy.getError();
}


// Destructor
Harl::~Harl()
{
}


// Operators
Harl & Harl::operator=(const Harl &assign)
{
	_debug = assign.getDebug();
	_info = assign.getInfo();
	_warning = assign.getWarning();
	_error = assign.getError();
	return *this;
}


// Getters / Setters
std::string Harl::getDebug() const
{
	return _debug;
}
std::string Harl::getInfo() const
{
	return _info;
}
std::string Harl::getWarning() const
{
	return _warning;
}
std::string Harl::getError() const
{
	return _error;
}


// Functions
void	Harl::complain(std::string level)
{
	std::string (Harl::*getMessage) (void) const;
	enum lvl{DEBUG, INFO, WARNING, ERROR, NOTHING};
	std::map<std::string, int> map;
	lvl x;

	map.insert(std::pair<std::string, int>("DEBUG", DEBUG));
	map.insert(std::pair<std::string, int>("INFO", INFO));
	map.insert(std::pair<std::string, int>("WARNING", WARNING));
	map.insert(std::pair<std::string, int>("ERROR", ERROR));
	map.insert(std::pair<std::string, int>("", NOTHING));

	if (map.find(level) == map.end())
		level = "";
	x = (lvl)map.at(level);
	switch (x)
	{
	case DEBUG:
	{
		getMessage = &Harl::getDebug;
		std::cout << "[ DEBUG ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getInfo;
		std::cout << "[ INFO ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getWarning;
		std::cout << "[ WARNING ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getError;
		std::cout << "[ ERROR ]\n" << (this->*getMessage)() << std::endl << std::endl;
		break;
	}
	case INFO:
	{
		getMessage = &Harl::getInfo;
		std::cout << "[ INFO ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getWarning;
		std::cout << "[ WARNING ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getError;
		std::cout << "[ ERROR ]\n" << (this->*getMessage)() << std::endl << std::endl;
		break;
	}
	case WARNING:
	{
		getMessage = &Harl::getWarning;
		std::cout << "[ WARNING ]\n" << (this->*getMessage)() << std::endl << std::endl;
		getMessage = &Harl::getError;
		std::cout << "[ ERROR ]\n" << (this->*getMessage)() << std::endl << std::endl;
		break;
	}
	case ERROR:
	{
		getMessage = &Harl::getError;
		std::cout << "[ ERROR ]\n" << (this->*getMessage)() << std::endl << std::endl;
		break;
	}
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}