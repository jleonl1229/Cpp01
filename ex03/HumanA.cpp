#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w1)
	: _name(name), _cpyweapon(w1) {}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_cpyweapon.getType() << std::endl;
}
