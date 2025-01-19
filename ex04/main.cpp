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

	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "First file could not be opened" << std::endl;
		return (2);
	}
	
	std::string secondfd = filename.append(".replace");
	std::ofstream newfile(secondfd.c_str());
	if (!newfile.is_open())
	{
		std::cerr << "Second file could not be opened" << std::endl;
		return (file.close(), 3);
	}

	std::string line;
	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
		int		i;
		std::string	milestone;

		milestone = "";
		i = 0;
		while (line[i])
		{
			if (line[i] != ' ')
				milestone += line[i];		
			else if (line[i] == ' ')
			{
				if (milestone[milestone.length() - 1] == '\n')
				{
					std::string	polishedmilestone;

					polishedmilestone = milestone.substr(0, milestone.length() - 1);
					if (polishedmilestone == s1)
						newfile << s2;
				}
				if (milestone == s1)
					newfile << s2;
				else
					newfile << milestone;
				milestone = "";
				newfile << ' ';
			}
			i++;
		}
		if (milestone != "")
		{
			if (milestone[milestone.length() - 1] == '\n')
			{
				std::string	polishedmilestone;
			       
				polishedmilestone = milestone.substr(0, milestone.length() - 1);
				if (polishedmilestone == s1)
					newfile << s2;
			}
			if (milestone == s1)
				newfile << s2;
			else
				newfile << milestone;
			milestone = "";
		}	
		newfile << '\n';
	}
	return (file.close(), newfile.close(), 0);
}
