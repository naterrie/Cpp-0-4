#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	this->_name = "default";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, not energy anymore !" << std::endl;
	else
	{
		this->_energyPoints = this->_energyPoints - 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitpoints = this->_hitpoints - amount;
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, not energy anymore !" << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he's dead !" << std::endl;
	else if (this->_hitpoints == 10)
		std::cout << "ClapTrap " << this->_name << " is already full hp !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->_hitpoints = this->_hitpoints + amount;
	}
	if (this->_hitpoints > 10)
		this->_hitpoints = 10;
}

int		ClapTrap::get_damage(void)
{
	return (this->_attackDamage);
}

int		ClapTrap::get_energy(void)
{
	return (this->_energyPoints);
}

int		ClapTrap::get_hitpoints(void)
{
	return (this->_hitpoints);
}
