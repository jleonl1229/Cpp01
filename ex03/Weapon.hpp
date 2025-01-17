#include <iostream>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		const std::string	&getType(void);
		void			setType(std::string newtype);
	private:
		std::string _type;	
};
