#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap marley("marley");

	std::cout << std::endl;
	bob.attack("marley");
	marley.takeDamage(bob.get_damage());
	marley.beRepaired(5);
	marley.attack("bob");
	bob.takeDamage(marley.get_damage());
	bob.beRepaired(5);
	bob.attack("marley");
	marley.takeDamage(10);
	std::cout << std::endl;
	for (int i = 0; i < 9; i++)
		bob.attack("marley");
	std::cout << std::endl;
	marley.beRepaired(1);
	std::cout << std::endl;
	return 0;
}
