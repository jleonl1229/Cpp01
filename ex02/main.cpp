#include <iostream>

int	main(void)
{
	std::cout << "*MESSAGE FOR DEBUGGING PURPOSSES*" << std::endl;
	std::string	str;

	str = "HI THIS IS BRAIN";
	/* Here i'll set a pointer to the string */
	std::string	*ptr;
	ptr = &str;
	/* Here i'll set a reference to the string | It's value must be initialized at the time of declaring */
	std::string	&ref = str;
	/* DONT'T DO THIS:	ref = str; */

	/* MEMORY ADDRESSES */
	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;

	/* VALUES */
	std::cout << "Strings memory address: " << &str << std::endl;
	/* (Pointer)First character version */
	/* std::cout << "Pointer: " << (*ptr)[0] << std::endl; */
	/* (Pointer)Full string version */ 
	std::cout << "Pointers memory address: " << ptr << std::endl;
	std::cout << "References memory address: " << &ref << std::endl;

	return (0);
}
