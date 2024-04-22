#include <iostream>
#include <string>
#include <fstream>

void	looser(std::string file, std::string s1, std::string s2)
{
	std::fstream	infile;
	std::fstream	outfile;
	std::string		line;
	size_t	pos;

	// c_str() used because fstream doesn't directly support 
	// std::string til c++11, std::ios::in indicates that 
	// the file is opened for reading only
	infile.open(file.c_str(), std::ios::in);
	if (!infile)
	{
		std::cout << "The input file couldn't be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	outfile.open(std::string (file + ".replace").c_str(), std::ios::out);
	if (!outfile)
	{
		std::cout << "The output file couldn't be opened." << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		while (getline(infile, line))
		{
			pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			}
			outfile << line;
			if (!infile.eof())
				outfile << std::endl;
		}
	}
	infile.close();
	outfile.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "syntax error" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		if(!av[2][0] || !av[3][0])
			std::cout << "Trying to trick me bruh" << std::endl;
		else
			looser(av[1], av[2], av[3]);
	}
	return 0;
}