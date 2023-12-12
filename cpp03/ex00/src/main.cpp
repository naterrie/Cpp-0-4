#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap marley("marley");

	bob.attack("marley");
	marley.takeDamage(bob.get_damage());
	marley.beRepaired(5);
	marley.attack("bob");
	bob.takeDamage(marley.get_damage());
	bob.beRepaired(5);
	for (int i = 0; i < 9; i++)
	{
		bob.attack("marley");
		marley.takeDamage(1);
	}
	bob.attack("marley");
	marley.takeDamage(1);
	marley.beRepaired(1);
	return 0;
}
