#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

void cast_int(int i)
{
	char c;
	float f;
	double d;

	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	std::cout << "char: ";
	if (i > 177 || i < 0)
		std::cout << "impossible" << std::endl;
	else if (i < 33 || i == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "float: " << f << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "double: " << d << std::endl;
}

void cast_char(char c)
{
	cast_int((int)c);
}

bool isDigit(char *s)
{
	std::string str;
	int i;

	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	for (; s[i]; i++) {
		if (std::isdigit(s[i]) == 0)
			return false;
	}
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
	{
		try
		{
			cast_int(std::stoi(argv[1]));
		}
		catch(const std::out_of_range& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		try
		{
			std::cout << std::stof(argv[1]) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "end of program" << std::endl;
	return (0);
}
