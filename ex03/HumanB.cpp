#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}
HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon1.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon1)
{
	this->_weapon1 = weapon1; 
}