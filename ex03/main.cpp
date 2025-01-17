#include <iostream>
#include "Weapon.hpp"

int	main(void)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	Weapon w1;

	w1.setType("Espada");
	std::cout << "Weapon's name is: " << w1.getType() << std::endl;
	return (0);
}
