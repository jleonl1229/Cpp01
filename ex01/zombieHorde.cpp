#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;
	Zombie	*zombs = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombs[i].setName(name);
		i++;
	}
	return (zombs);
}
