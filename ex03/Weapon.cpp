#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;	
}
Weapon::~Weapon() {}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

void			Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}