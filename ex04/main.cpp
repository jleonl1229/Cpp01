#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	if (ac != 4)
	{
		std::cerr << "The program must have 3 parameters" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::fstream file(filename.c_str(), std::ios::in | std::ios::out);
	if (!file.is_open())
	{
		std::cerr << "File could not be opened" << std::endl;
		return (2);
	}
	
	std::string line;
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
	}
	return (file.close(), 0);
}
