#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::string		filename;
	std::string		filename_replace;
	std::string		s1;
	std::string		s2;
	std::ifstream	in;
	std::ofstream	out;

	std::string		buf;
	size_t			x;

	if (argc != 4)
	{
		std::cout << "wrong inputsize\n";
		return (1);
	}
	filename = argv[1];
	filename_replace = filename + ".replace";
	s1 = argv[2];
	s2 = argv[3];
	in.open(argv[1]);
	if (in.fail())
	{
		std::cout << "Failed to open file\n";
		return (1);
	}
	out.open(filename_replace.c_str());
	while (getline(in, buf))
	{
		x = buf.find(s1);
		if (x != std::string::npos)
		{
			out << buf.substr(0, x);
			out << s2;
			out << buf.substr(x + s1.length(), buf.length());
		}
		else
			out << buf;
		out << std::endl;
	}
	out.close();
	in.close();
	return (0);
}