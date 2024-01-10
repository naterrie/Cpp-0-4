#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(void): ClapTrap()
{
	this->_name = "default";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	if (this->_hitpoints <= 0)
		std::cout << "FragTrap " << this->_name << " is already dead !" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " can't attack, not energy anymore !" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is waiting for high five" << std::endl;
}

