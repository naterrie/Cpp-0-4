#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor default called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;

	if (this == &rhs)
		return (*this);
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

void	ClapTrap::takeDamage(int amount)
{
	if (amount < 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't take negative damage !" << std::endl;
		return ;
	}
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

void	ClapTrap::beRepaired(int amount)
{
	if (amount < 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired with negative amount of hp !" << std::endl;
		return ;
	}
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

int		ClapTrap::get_damage(void) const
{
	return (this->_attackDamage);
}

int		ClapTrap::get_energy(void) const
{
	return (this->_energyPoints);
}

int		ClapTrap::get_hitpoints(void) const
{
	return (this->_hitpoints);
}
