#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>
#include <sstream>
#include <cmath>

void print_values(char c, int i, float f, double d)
{
	int x;

	x = d;
	std::cout << "char: ";
	if (i > 177 || i < 0)
		std::cout << "impossible" << std::endl;
	else if (i < 33 || i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	if (std::isnan(f))
		std::cout << "i: " << "impossible" << std::endl;
	else
		std::cout << "i: " << i << std::endl;
	if ((double)x == d)
	{
		std::cout << std::setprecision(1) << std::fixed << "float: " << f << "f" << std::endl;
		std::cout << std::setprecision(1) << std::fixed << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void cast_int(int i)
{
	std::cout << "cast_int called" << std::endl;
	char c;
	float f;
	double d;

	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	print_values(c, i ,f ,d);
}

void cast_char(char c)
{
	std::cout << "cast_char called" << std::endl;
	cast_int((int)c);
}

void cast_double(double d)
{
	std::cout << "cast_double called" << std::endl;
	char c;
	int i;
	float f;

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	print_values(c, i ,f ,d);
}

void cast_float(float f)
{
	std::cout << "cast_float called" << std::endl;
	char c;
	int i;
	double d;

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	print_values(c, i ,f ,d);
}


bool isDigit(char *str)
{
    char* endptr = 0;
	long l;
	std::ostringstream ss;
	std::string sstr;

	sstr = str;
	l = std::strtol(str, &endptr, 10);
	ss << l;
	if (ss.str() != sstr)
		return false;
	if (l > INT_MAX || l < INT_MIN)
		return false;
    if(*endptr != '\0' || endptr == str)
        return false;
    return true;
}

bool isDouble(char *str)
{
	char* endptr = 0;

	std::strtod(str, &endptr);
	if(*endptr != '\0' || endptr == str)
		return false;
	return true;
}

bool isFloat(char *str)
{
	char* endptr = 0;
	std::string str_nof;

	str_nof = str;
	if (str_nof.at(str_nof.size() - 1) != 'f')
		return false;
	str_nof.resize(str_nof.size() - 1);
	std::strtof(str_nof.c_str(), &endptr);
	if(*endptr != '\0' || endptr == str_nof)
		return false;
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong argument count" << std::endl;
		return 1;
	}
	if (!argv[1][1] && (argv[1][0] < '0' || argv[1][0] > '9'))
		cast_char(argv[1][0]);
	else if (isDigit(argv[1]))
		cast_int((int)std::strtol(argv[1], NULL, 10));
	else if (isDouble(argv[1]))
		cast_double(std::strtod(argv[1], NULL));
	else if (isFloat(argv[1]))
		cast_float(std::strtof(argv[1], NULL));
	return (0);
}
