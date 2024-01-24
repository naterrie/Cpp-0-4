#include "Character.hpp"

Character::Character()
{
	this->_name = "Default";
	this->_trash_count = 0;
	this->_trash = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name): _name(name)
{

	this->_trash_count = 0;
	this->_trash = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < this->_trash_count; i++)
		if (this->_trash[i] != NULL)
			delete this->_trash[i];
	delete [] this->_trash;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character	&Character::operator=(const Character &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->_trash_count = copy._trash_count;
	if (copy._trash == NULL)
		this->_trash = NULL;
	else
		this->_trash = new AMateria*[copy._trash_count];
	for (int i = 0; i < copy._trash_count; i++)
		this->_trash[i] = copy._trash[i]->clone();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i]->clone();
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		trash(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

void	Character::trash(AMateria *m)
{
	AMateria	**tmp;
	int			i = 0;

	this->_trash_count++;
	tmp = new AMateria*[this->_trash_count];
	for (; i < this->_trash_count - 1; i++)
		tmp[i] = this->_trash[i];
	tmp[i] = m;
	delete [] this->_trash;
	this->_trash = tmp;
}
