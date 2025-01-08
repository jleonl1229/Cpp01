#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	Zombie *horde = zombieHorde(5, "Varys");
	int i = 0;
	while (i < 5)
	{
		std::cout << "| Position " << i << " | This zombies name is: " << horde[i].getName() << std::endl;
		i++;
	}
	delete[] horde;
	return (0);
}
