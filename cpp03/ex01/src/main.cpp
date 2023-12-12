#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap eddy("eddy");
	ScavTrap malou("malou");

	eddy.attack("malou");
	malou.takeDamage(99);
	malou.beRepaired(50);
	malou.attack("malou");
	malou.guardGate();
	malou.takeDamage(51);
	malou.attack("eddy");
	eddy.takeDamage(0);
	return (0);
}
