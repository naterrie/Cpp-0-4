#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap eddy("eddy");
	ScavTrap malou("malou");

	std::cout << std::endl;
	eddy.attack("malou");
	malou.takeDamage(eddy.get_damage());
	malou.beRepaired(10);
	malou.guardGate();
	malou.attack("eddy");
	eddy.takeDamage(malou.get_damage());
	eddy.beRepaired(1);
	malou.takeDamage(19);
	std::cout << std::endl;
	return (0);
}
