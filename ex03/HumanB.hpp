#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon          _weapon1;
	public:
		void	attack(void);
		void	setWeapon(Weapon weapon1);
		HumanB();
		~HumanB();

};
