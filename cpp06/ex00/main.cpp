#include <string>
#include <iostream>
#include <iomanip>

void cast_char(char c)
{
	int i;
	float f;
	double d;

	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	std::cout << "char: " << c << std::endl;
	std::cout << "i: " << i << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "float: " << f << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << "double: " << d << std::endl;
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
	return (0);
}