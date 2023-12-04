#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	Jean("Jean");
	ScavTrap	Jacques("Jacques");
	FragTrap	Goldman("Goldman");

	Jean.attack("Jacques");
	Jacques.takeDamage(1);
	Jacques.beRepaired(1);
	Jacques.guardGate();
	Jean.attack("Goldman");
	Goldman.takeDamage(1);
	Goldman.beRepaired(1);
	Goldman.highFivesGuys();
	Jacques.guardGate();
	return (0);
}
