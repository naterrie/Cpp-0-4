#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ClapTrap marley("marley");

	bob.attack("marley");
	marley.takeDamage(5);
	marley.beRepaired(5);
	marley.attack("bob");
	bob.takeDamage(5);
	bob.beRepaired(5);
	return 0;
}
