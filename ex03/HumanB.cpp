#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name), _weapon1(NULL) {}
HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon1->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &outweapon)
{
	this->_weapon1 = &outweapon; 
}
