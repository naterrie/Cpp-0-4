#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << _name << " can't attack, not energy anymore !" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " want to high five" << std::endl;
}
