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
	std::map<std::string, std::string (Harl::*)(void) const> map;

	map.insert(std::pair<std::string, std::string (Harl::*)(void) const>("DEBUG", &Harl::getDebug));
	map.insert(std::pair<std::string, std::string (Harl::*)(void) const>("INFO", &Harl::getInfo));
	map.insert(std::pair<std::string, std::string (Harl::*)(void) const>("WARNING", &Harl::getWarning));
	map.insert(std::pair<std::string, std::string (Harl::*)(void) const>("ERROR", &Harl::getError));

	if (map.find(level) == map.end())
	{
		std::cout << "Wrong input, check your spelling" << std::endl;
		return ;
	}
	getMessage = map.at(level);
	std::cout << (this->*getMessage)() << std::endl;
}