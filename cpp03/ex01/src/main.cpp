#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap eddy("eddy");
	ScavTrap malou("malou");

	eddy.attack("malou");
	malou.takeDamage(1);
	malou.beRepaired(1);
	malou.guardGate();
	return (0);
}
