#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "The zombie " << this->_name << " has been destroyed" << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void)
{
	return(this->_name);
}

void		Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

