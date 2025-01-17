#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string type)
{
	this->_name = name;	
	this->_weapon0._type = type;
}
HumanA::~HumanA() {}

std::string	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon0.getType() << std::endl;
}
