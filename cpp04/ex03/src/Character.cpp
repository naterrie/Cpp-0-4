#include "Character.hpp"

Character::Character()
{
	this->_name = "Default";
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	this->_name = copy._name;
	this->_count = copy._count;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character	&Character::operator=(const Character &copy)
{
	this->_name = copy._name;
	this->_count = copy._count;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	if (this->_count < 4)
	{
		this->_inventory[this->_count] = m;
		this->_count++;
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->_inventory[idx] = NULL;
		this->_count--;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
