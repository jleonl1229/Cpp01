#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	humanaexample(void)
{	
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	humanbexample(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	std::cout << "Here Jim will take a wepon" << std::endl;
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int	main(void)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	/* Weapon w1; */

	/* w1.setType("Espada"); */
	/* std::cout << "Weapon's name is: " << w1.getType() << std::endl; */
	humanaexample();
	humanbexample();
	return (0);
}
