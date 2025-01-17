#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon0;
	public:
		std::string	attack(void);
		HumanA();
		~HumanA();

};
