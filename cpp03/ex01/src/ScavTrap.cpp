#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << " can't attack, not energy anymore !" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}
